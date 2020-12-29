#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
long long n,k;
long long mp[10][10];
long long f[10][10];
long long lie[10];
long long ans = 0;
void dfs(long long hang,long long step){
	if(step > k){
		ans ++;
		return ;
	}
	if(hang > n) return ;
	for(long long i=1;i<=n;i++){
		if(!lie[i]&&mp[hang][i]){
			lie[i] = 1;
			dfs(hang+1,step+1);
			lie[i] = 0;
		}
	}
	dfs(hang+1,step);
}
long long main(){
	while(1){
		scanf("%d %d",&n,&k);
		ans = 0;
		memset(mp,0,sizeof(mp));
		memset(f,0,sizeof(f));
		memset(lie,0,sizeof(lie));
		if(n == -1) break;
		for(long long i=1;i<=n;i++){
			char a[10];
			cin>>a;
			for(long long j=0;j<strlen(a);j++){
				if(a[j] == '#') mp[i][j+1] = 1;
			}
		}
		dfs(1,1);
//		for(long long i=1;i<=k;i++) ans /= i;
		cout<<ans<<endl;
	}
	
	
	return 0;
}
