#include <bits/stdc++.h>
using namespace std;

int n;

struct i{
	char name[105],idcard[105];
	int s,rank;
}e[1005];
char cmd[105];
bool cmp(i a,i b){
	return a.s > b.s;
}
int main(){
	char x[]="asd";
	char y[10];
	strcpy(y,x);
	cout<<strcmp(x,y);
	cin >> n >> cmd;
	for(int i=1;i<=n;i++){
		char score[100];
		cin>>e[i].name>>e[i].idcard>>score;
		e[i].s = 0;
		if(score[0]=='n') e[i].s = -1;
		else for(int j=strlen(score)-1,k=1;j>=0;k*=10,j--) e[i].s += ((int)score[j]-48)*k;
	}
    for(int i=1;i<=n;i++){
    	int t = 1;
    	for(int j=1;j<=n;j++){
    		if(e[j].s > e[i].s) t++;
		}
		e[i].rank = t;
	}
	int len = strlen(cmd);
	if((cmd[0]>='a'&&cmd[0]<='z')||(cmd[0]>='A'&&cmd[0]<='Z')){
		for(int i=1;i<=n;i++){
			
			int flag = 0; 
			for(int j=0;j<strlen(e[i].name);j++){
				for(int k=0;k<len;k++){
					if(cmd[k] != e[i].name[j+k]){
					  break;
					}
					if(k == len-1) flag = 1;
				}
				if(flag == 1) break;
			}
			if(flag==1){
				if(e[i].s!=-1)
				cout<<e[i].name<<" "<<e[i].idcard<<" "<<e[i].s<<" "<<e[i].rank<<endl;
				else
				cout<<e[i].name<<" "<<e[i].idcard<<" "<<"n/a"<<" "<<"n/a"<<endl;
				break;
			}
		}
		return 0;
	}
	long long c = 0;
	for(long long i=len-1,k=1;i>=0;i--,k*=10) c += ((int)cmd[i] - 48) * k;
	if(c>=0&&c<=100){
		for(int i=1;i<=n;i++){
			if(c==e[i].s){
				cout<<e[i].name<<" "<<e[i].idcard<<" "<<e[i].s<<" "<<e[i].rank<<endl;
			}
		}
	}
	else{
		for(int i=1;i<=n;i++){
			
			int flag = 0; 
			for(int j=0;j<strlen(e[i].idcard);j++){
				for(int k=0;k<len;k++){
					if(cmd[k] != e[i].idcard[j+k]){
					  break;
					}
					if(k == len-1) flag = 1;
				}
				if(flag == 1) break;
			}
			if(flag==1){
				if(e[i].s!=-1)
				cout<<e[i].name<<" "<<e[i].idcard<<" "<<e[i].s<<" "<<e[i].rank<<endl;
				else
				cout<<e[i].name<<" "<<e[i].idcard<<" "<<"n/a"<<" "<<"n/a"<<endl;
				break;
			}
		}
	}
	
	
	
	return 0;
}
