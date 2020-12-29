#include <bits/stdc++.h>
using namespace std;
int n,m;
bool a[100005];
int main(){
	while(~scanf("%d %d",&n,&m)!=0){
		memset(a,0,sizeof(a));
		int cnt = 0;
		while(cnt<n){
		  for(int j=1,tot=1;;tot++){
		    if(cnt==n) break;
		  	if(tot>2*n) tot-=2*n;
		  	if(!a[tot]) j++;
		  	if(j==m+1) a[tot]=1,j=1,cnt++; 
		  }	
		}
		int j=0;
		for(int i=1;i<=2*n;i++){
			if(j==50) {
				puts("");
				puts("");
				j-=50;
			}
			if(a[i]) printf("B");
			else printf("G");
			j++;
		}
		puts("");
		puts("");
	}
	return 0;
}
