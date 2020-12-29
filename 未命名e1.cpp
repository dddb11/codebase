#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000001];
int main(){
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	int cnt = 0;
	for(int i=2;i<=n;i++){
		if(a[i] <= a[1]) cnt++;
	}
	
	cout << (int)log(2)(cnt);
 	return 0;
}


