#include <bits/stdc++.h>
using namespace std;
const int N = INT_MAX;
int a[500005],b[500005];
int dp[500005];
int d[500005];
int ans = 0;
int n,k;
int main(){
	int c[] = {0};
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
//		cin>>a[i];
		a[i] -= i;
	}
	for(int i=1;i<=k;i++) scanf("%d",&b[i]);
	sort(b+1,b+1+k);
	for(int i=2;i<=k;i++){
		if(a[b[i]] < a[b[i-1]]){
			cout<<"-1";
			return 0;
		}
	}
	a[0] = -N, a[n+1] = N;
	b[0] = 0 , b[k+1] = n+1;
	for(int i=0;i<=k;i++){
		int x = b[i] , y = b[i+1];
//		memset(d,0,sizeof(d));
		int now = 1;
		d[1] = a[x];
		dp[x] = 1;
		for(int j=x+1;j<=y;j++){
			int pos = upper_bound(d+1,d+now+1,a[j])-d;
			if(pos == now+1){
				
				now++;
				d[now] = a[j];
				dp[j] = now;
			}
			else{
				if(pos == 1) continue;
				dp[j] = pos;
				d[pos] = min(d[pos],a[j]);
			}
			
		}
		ans += (y-x+1-dp[y]);
	}
	cout<<ans;
	return 0;
}
