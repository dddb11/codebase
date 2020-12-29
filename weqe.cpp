#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
const int n = 1000000;
int j[1000005],o[1000005];
int ji_ou=0,ou_ji=0,ou_ou,ji_ji;
int main(){
	memset(j,0,sizeof(j));
	memset(o,0,sizeof(o));
	j[1] = 1;
	o[2] = 1;
	for(int i=3;i<=n;i++){
		if(i%2) j[i] = 1;
		else o[i] = 1;
	}
	ji_ji = 1;
	ou_ou = 1;
	ji_ou = 0;
	ou_ji = 0;
	for(int i=3;i<=n;i++){
		if(i%2){
			j[i] += ou_ou;
			o[i] += ji_ji;
			ji_ji += j[i];
			ou_ji += o[i];
		}
		else{
			j[i] += ou_ji;
			o[i] += ji_ou;
			ji_ou += j[i];
			ou_ou += o[i];
		}
        j[i] %= mod;
        o[i] %= mod;
        ji_ji %= mod;
	    ou_ou %= mod;
	    ji_ou %= mod;
	    ou_ji %= mod;
		
	}
	int t;
	cin >> t;
	while(t--){
		int w;
		scanf("%d",&w);
		printf("%d\n",(j[w]+o[w])%mod);
	}
	return 0;
}
