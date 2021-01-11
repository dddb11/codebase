#include <bits/stdc++.h>
using namespace std;
int n,a[1000005];
int b[1000005];
int max1 = -1;
int flag = 0;
int main(){
	cin >> n;
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<=n;i++){
		if(b[a[i]]&&a[i]!=1){
			flag = 1;
			break;
		}
		b[a[i]] = 1;
		max1 = max(max1,a[i]);
		for(int j=2;j<=sqrt(a[i]);j++){
			if(!(a[i]%j)){
				int k=a[i]/j;
				if(b[k]||b[j]) {
					flag = 1;
					break;
				}
				else{
					b[k] = 1;
					b[j] = 1;
				}
			}
		}
		if(flag) break;
	}
	if(!flag) {
		cout<<"pairwise coprime";
		return 0;
	}
	flag = 0;
	for(int i=2;i<=n;i++){
		if(a[i]!=a[1]) break;
		if(i==n) flag=1;
	}
	for(int i=2;i<=sqrt(max1)+1;i++){
		for(int j=1;j<=n;j++){
			if(a[j]%i)break;
			if(j==n) {
				flag = 1;
				break;
			}
		}
	}
	if(!flag){
		cout<<"setwise coprime";
		return 0;
	}
	cout<<"not coprime";
	return 0;
}
