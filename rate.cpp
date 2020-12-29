#include <bits/stdc++.h>
using namespace std;
int n;
float a,b;
float ans;
int main(){
	cin >> n;
	ans = 0.0;
	while(n--){
		cin >> a >> b;
		ans += ((b-a)/(a+b));
	}
	cout << (int)(ans*100);
}
