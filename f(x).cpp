#include <bits/stdc++.h>
using namespace std;
int f(int x){
	int cnt = 0;
	for(int i=1;i<=x;i++){
		int t = i;
		while(t){
			if(t%10==1) cnt++;
			t /= 10;
		}
	}
	return cnt;
} 
int a[10000001];
int main(){
	a[1] = 1;
	for(int i=2;;i++){
		int t = i;
		int cnt = 0;
		while(t){
			if(t%10 == 1) cnt++;
			t /= 10;
		} 
		a[i] = a[i-1] + cnt;
		if(a[i] == i){
			cout<<i;
			break;
		}
	}
	return 0;
}
