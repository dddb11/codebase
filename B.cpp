#include <bits/stdc++.h>
using namespace std;
long long k,d,x;
int main(){
	cin >> x >> k >> d;
	if(x<0) x = -x;
	if(x/d > k){
		cout<<x-d*k;
		return 0;
	}
	if(x >= d){
		k -= (x/d);
		x %= d;
		if(k%2) cout<<d-x;
		else cout<<x;
		return 0;
	}
	if(k%2){
		cout<<d-x;
	}
	else cout<<x;
	return 0;
}
