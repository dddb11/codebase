#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	while(n--){
		char a[105];
		cin >> a;
		if(strlen(a)==3&&a[0]=='S'&&a[1]=='C'&&a[2]=='U'){
			cout<<"YES"<<endl;
			continue;
		}
		int pos = -1;
		for(int i=0;i<strlen(a);i++){
			if(a[i]=='S'&&a[i+1]=='C'&&a[i+2]=='U'){
				pos = i;
				break;
			}
		}
		if(pos == -1){
			cout<<"NO"<<endl;
			continue;
		}
		int flag = 0;
		for(int i=0;i<pos;i++){
			if(a[i]!='A') {
				flag = 1;
				break;
			}
		}
		for(int i=pos+3;i<strlen(a);i++){
			if(a[i]!='A') {
				flag = 1;
				break;
			}
		}
		if(flag){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	
	
	return 0;
}
