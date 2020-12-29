#include <bits/stdc++.h>
using namespace std;
long long n,m;
int main(){
    cin >> n >> m;
    long long ans = n/m;
	for(int i=1;i<=m-n%m;i++) cout<<ans<<" ";
	for(int i=m-n%m+1;i<=m;i++) cout<<ans+1<<" "; 
	
	
	return 0;
}
