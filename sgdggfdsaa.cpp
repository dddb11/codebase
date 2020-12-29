#include <bits/stdc++.h>
using namespace std;
int n;
int cnt = 0;
struct i{
	char name[105],idcard[105];
	int s;
}e[1005];
int max1 = -1000 , min1 = 1010;
int ans1,ans2;
char no[] = "n/a";
int main(){
	cin >> n;
	for(int i=1;i<=n;i++){
		char na[100],id[100],score[100];
		cin>>na>>id>>score;
		if(strcmp(no,score)==0) continue;
		strcpy(e[++cnt].name,na);
		strcpy(e[cnt].idcard,id);
		e[i].s = 0;
		for(int j=strlen(score)-1,k=1;j>=0;k*=10,j--) e[i].s += ((int)score[j]-48)*k;
	} 
	cout << e[1].s;
	
	return 0;
}
