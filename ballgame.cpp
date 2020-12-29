#include <bits/stdc++.h>
using namespace std;
int m,f,k;
char ans[55];
int flag[55];
int tot;
void solve(int x,int now){
	if(x<=f&&now>tot){
		solve(x,now-tot);
	}
	if(x<=f){
		flag[now] = 1;
		ans[now] = 'F';
		int t = 1;
		while(t<=k){
			now++;
			if(flag[now]==0){
				t++;
			}
			if(now>tot) now-=tot;
		}
	    solve(x+1,now);
	}
	
}
int main(){
	cin >> m >> f >> k;
	tot = m+f;
	memset(flag,0,sizeof(flag));
	solve(1,k);
	for(int i=1;i<=tot;i++){
		if(!flag[i]) ans[i] = 'M';
	}
	for(int i=1;i<=tot;i++) cout<<ans[i];
	return 0;
}
