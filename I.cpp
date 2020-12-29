#include <bits/stdc++.h>
using namespace std;
const int N = 190007 + 20;
long long ans = 0;
int a,b,c;
int x[N],y[N],z[N];
int main(){
	cin >> a >> b >> c;
	x[0] = 0 ,y[0] = 0,z[0] = 0;
	for(int i=1;i<=a;i++) scanf("%d",&x[i]);
	for(int i=1;i<=b;i++) scanf("%d",&y[i]);
	for(int i=1;i<=c;i++) scanf("%d",&z[i]);
	sort(x,x+a+1);
	sort(y,y+b+1);
	sort(z,z+c+1);
	while(1){
		
	}
	cout<< ans;
	return 0;
} 

