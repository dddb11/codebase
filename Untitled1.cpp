	#include <bits/stdc++.h>
	using namespace std;
	int main(){
		int n;
		cin >> n;
		while(n--){
			char a[1001];
			cin >> a;
			int flag = 1;
			int fir;
			for(int i=0;i<strlen(a);i++){
				if(((int)a[i]>=65&&(int)a[i]<=90)||a[i]=='_') fir = i;
				if(a[i] == '_'){
					flag = 0;
					break;
				}
			}
			for(int i=0;i<fir;i++) cout<<a[i]; 
			if(!flag){
				for(int i=fir;i<strlen(a);i++){
					if(a[i] == '_'){
						i++;
						cout << (char)((int)a[i]-32);
					}
					else{
						cout<<a[i];
					}
				}
			}
			if(flag){
				for(int i=fir;i<strlen(a);i++){
					if((int)a[i]>=65&&(int)a[i]<=90){
						cout << '_';
						cout << (char)((int)a[i]+32);
					}
					else{
						cout<<a[i];
					}
				}
			}
			printf("\n");
		}
		
		
		return 0;
	}
