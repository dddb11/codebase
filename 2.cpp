#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,e;
int main(){
	while(cin>>a>>b>>c>>d>>e){
		if(a==0&&b==0&&c==0&&d==0&&e==0) break;
		if(2*b==a+c&&2*c==b+d&&2*d==c+e){
			cout<<"case one"<<endl;
			int p = b - a;
			for(int i=1;i<=5;i++) cout << e + i*p <<" ";
			cout<<endl;
		}
		if(b*b==a*c&&c*c==b*d&&d*d==c*e){
			cout<<"case two"<<endl;
			int p = b / a;
			for(int i=1;i<=5;i++) cout<< e*pow(p,i)<<" ";
			cout<<endl;
		}
		if(a+b==c&&b+c==d&&c+d==e){
			cout<<"case three"<<endl;
			int n=d,m=e;
			for(int i=1;i<=5;i++){
				cout<<n+m<<" ";
				int temp = n;
				n = m;
				m = temp + n;
			}
			cout<<endl;
		}
	}
	
	
	return 0;
}
