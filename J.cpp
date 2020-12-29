#include <bits/stdc++.h>
using namespace std;
char a[100005];
long long  b[100005];
long long main(){
	cin >> a;
	long long len = strlen(a);
	if(len<26){
		cout<<"-1";
	}
	else{
		for(long long i=0;i<len;i++){
			b[i] = (long long)a[i] - 96; 
		}
		
	    long long now = 1;
		for(long long i=0;i<len;i++){
			if(b[i]<=now){
			a[i] = (char)(now+96);
			now++;
		  }
		  if(now == 27) break;
		}
		if(now!=27){
				cout<<"-1"; 
			}
		else{
				for(long long i=0;i<len;i++) cout<<a[i];
			}
	}
		
	
	return 0;
}
