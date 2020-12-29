#include <bits/stdc++.h>
using namespace std;
int a[1001];
int big,small;
int n;
void max_min(int x[],int n,int *max,int *min){
	*max = a[1];
	*min = a[1];
	for(int i=2;i<=n;i++){
		if(a[i] > *max) *max = a[i];
		if(a[i] < *min) *min = a[i];
	}
}
int main(){
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	int *p = &a[2];
	cout << *p <<" "<<*(p+1);
	return 0;
}
