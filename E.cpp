#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
int dp[10000005];
long long c,d,a,b;
int t,n;
int main(){
//	for(int i=1;i<=10000000;i++) 
	cin>>t;
	a = 1;
	b = 4;
	dp[1] = 5;
	for(int i=2;i<=10000000;i++){
		long long temp =( a*5 + b*4 ) % mod;
		dp[i] = temp;
		c = a + b;
		d = a*4 + b*3;
		a = c;
		b = d;
		a %= mod;
		b %= mod;
	}
	while(t--){
		scanf("%d",&n);
		printf("%d\n",dp[n]);
	}
	
	
	return 0;
}
