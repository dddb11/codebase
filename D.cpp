#include <bits/stdc++.h>
using namespace std;
int a[100005];
int n,m;
int main(){
	a[0] = 1;
	a[1] = 2;
	for(int i=2;i<=25;i++){
		a[i] =  a[i-1] * 2;
	}
	while(scanf("%d %d",&n,&m)!=EOF){
		int ans1=0,ans2=m;
	    for(int i=1;;i++){
	    	int cost = 3 * (a[i]-1);
	    	int now = 3* a[i-1];
	    	if(now>n||cost>m) break;
	    	ans1 = i;
	    	ans2 = m-cost;
		}
		printf("%d %d\n",ans1,ans2);
	}
	
	
	return 0;
}
