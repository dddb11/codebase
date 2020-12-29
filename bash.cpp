#include<bits/stdc++.h>
using namespace std;
int n,a[50];
int each[50];
int ans = 9999999;
int v[50];
void work(int num,int now){
	if(num>n){
	   ans = min(ans,now);
	   return ;
	} 
	for(int i=1;i<=n;i++){
		if(!v[i]){
			v[i] = 1;
			if(each[now]>=a[i]){
			   each[now] -= a[i];
			   work(num+1,now);
			   each[now] += a[i];
			   v[i] = 0;
			}
			else{
			   each[now+1] -= a[i];
			   work(num+1,now+1);
			   each[now+1] += a[i];
			   v[i] = 0;
			}
		}
	}
}
int main(){
	cin >> n;
	for(int i=1;i<=n;i++) cin>>a[i];
	memset(v,0,sizeof(v));
	for(int i=1;i<=50;i++) each[i] = 20;
	work(1,1);
	cout << ans;
	return 0;
} 
