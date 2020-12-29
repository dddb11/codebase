#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
    getchar();
	while(n--){
    char a[10001];
	gets(a);
	int last = 0;
	for(int i=1;i<strlen(a);i++){
		if(a[i] == ' '){
			reverse(a+last,a+i);
			last = i+1;
		}
	}
	reverse(a+last,a+strlen(a));
	
	cout<<a<<endl;
	}
	return 0;
}
