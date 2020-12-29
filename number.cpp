#include <bits/stdc++.h>
using namespace std;
int t[10]={0},n;
int x[10];
int main(){
	cin>>n;
	while(n){
		t[++t[0]] = n%10;
		x[t[0]] = t[t[0]];
		n /= 10;
	}
	reverse(x+1,x+t[0]+1);
	for(int i=t[0];i>=1;i--){
		t[i] += x[i];
	}
	for(int i=t[0];i>=2;i--){
		if(t[i]>=10){
			t[i] -= 10;
			t[i-1] ++;
		}
	}
	int flag = 0;
	for(int i=1;i<=t[0];i++){
		cout<<t[i];
	}
	return 0;
}
