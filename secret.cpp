#include <bits/stdc++.h>
using namespace std;
int k,m;
int a[10][200];
int ans = 0;
void dfs(int level,int now){
//	cout << level << " " << now <<endl;
	if(now > m){
		if(level == k+1) ans +=1;
		else {
			int t = 1;
			for(int i=level;i<=k;i++) t*=(a[i][0]);
			ans += t;
		}
		return ;
	}
	for(int i=1;i<=a[level][0];i++){
		dfs(level+1,now+a[level][i]);
	}
}
int main(){
    while(~scanf("%d",&k)!=EOF){
	cin >> m;
	ans = 0;
	memset(a,0,sizeof(a));
	for(int i=1;i<=k;i++){
		cin >> a[i][0];
		for(int j=1;j<=a[i][0];j++){
			cin >> a[i][j];
		}
		a[i][++a[i][0]] = 0; // not to choose
		sort(a[i]+1,a[i]+1+a[i][0]);
		reverse(a[i]+1,a[i]+1+a[i][0]);
	}
	dfs(1,0);
	cout << ans <<endl;
	
}
	return 0;
}
