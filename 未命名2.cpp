#include <bits/stdc++.h>
using namespace std;
int a[] = {0,1,2,3,4,5};
int main(){
	cout<<upper_bound(a+1,a+5,5)-a;
	
	return 0;
}
