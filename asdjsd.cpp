#include <bits/stdc++.h>
using namespace std;

int n;

struct i{
	char name[105],idcard[105];
	int s;
}e[1005];
int max1 = -1000 , min1 = 1010;
int ans1,ans2;
int main(){
	cin >> n;

	for(int i=1;i<=n;i++){
		char score[100];
		cin>>e[i].name>>e[i].idcard>>score;
		e[i].s = 0;
		if(score[0]=='n') e[i].s = -1;
		else for(int j=strlen(score)-1,k=1;j>=0;k*=10,j--) e[i].s += ((int)score[j]-48)*k;
	}
	
	for(int i=1;i<=n;i++){
		if(e[i].s!=-1){
			max1 = e[i].s;
			min1 = e[i].s;
			ans1 = i;
			ans2 = i;
			break;
		}
	}
	
	for(int i=1;i<=n;i++){
		if(e[i].s == -1) continue;
		if(e[i].s >= max1){
			if(e[i].s>max1){
				max1 = e[i].s;
				ans1 = i;
		   }
         	else{
			    if(strcmp(e[ans1].name,e[i].name)==1){
				    ans1 = i;
				}
			}
		}
		if(e[i].s <= min1){
			if(e[i].s<min1){
				min1 = e[i].s;
				ans2 = i;
			}
			else{
				if(strcmp(e[ans2].name,e[i].name)==-1){
					ans2 = i;
				}
			}
		}
	}
	
	cout<<e[ans1].name<<" "<<e[ans1].idcard<<endl;
	cout<<e[ans2].name<<" "<<e[ans2].idcard<<endl;
	
	 
	return 0;
}
