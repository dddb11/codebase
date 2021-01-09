#include <bits/stdc++.h>
using namespace std;
char a[100001];
void work(int x){
	int flag = 0;
	if(x%2){
		for(int i=0;i<=x;i++){
			if(a[i]!=a[x-i]) break;
			if(i==x){
			flag = 1;
			work((x-1)/2);
			}
		}
	}
	if(!flag) cout<<x;
	return ;
}
int main(){
	cin>>a;
	work(strlen(a)-1);
	
	return 0;
}
