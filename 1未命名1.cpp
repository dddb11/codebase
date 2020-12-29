#include <bits/stdc++.h>
using namespace std;
int n;
int num;
bool a[5005];
int t;
void work1(){
		int i = 1;
		for(int j=1;j<=num;j++){
			if(a[j]){
			    i++;
			}
			if(i==3){
			 t--;
		     i-=2;
			 a[j] = 0;	
			}	
		}
}
void work2(){
		int i = 1;
		for(int j=1;j<=num;j++){
			if(a[j]){
			    i++;
			}
			if(i==4){
			 t--;
		     i-=3;
			 a[j] = 0;	
			}
		}
}
int main(){
	cin >> n;
	while(n--){
		cin >> num;
		t = num;
		memset(a,1,sizeof(a));
		while(t>3){
			work1();
			if(t<=3) break;
			work2();
		}
		cout << "1";
		for(int i=2;i<=num;i++) {
			if(a[i]) cout<<" "<<i;
		}
		cout<<endl;
	}
	
	
	return 0;
}
