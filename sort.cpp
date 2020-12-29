#include <bits/stdc++.h>
using namespace std;
int a[44730];
const int n = 30000;
int t;
int main(){
	a[0] = 0;
	a[1] = 1; 
	int flag = 0;
	for(int i=2;i<=n;i++) a[i] = a[i-1]+i;
	cin >> t;
	for(int i=0;i<=n;i++){
		if(i>t) break;
		for(int j=i;j<=n;j++){
			if(a[j]-a[i]==t&&j-i>1){
				flag = 1;
				cout << i+1 << endl;
				continue;
			}
		}
	}
	if(!flag) cout << "No Solution";
	return 0;
}
