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
int main(){
	int a = 1;
	int now;
	for(int i=2;;i++){
		int t = i;
		int cnt = 0;
		while(t){
			if(t%10 == 1) cnt++;
			t /= 10;
		} 
		now = a + cnt;
		a = now;
		if(now == i){
			cout<<i<<endl;
		}
	}
	return 0;
}
