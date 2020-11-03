#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int n;
char q;
char cd[28];
int w[40],s[40],t[40];
bool check(){
	for(int i=1;i<=7;i++){
		for(int j=1;j<=4;j++){
		 if(w[i]&&w[i+1]&&w[i+2]) w[i]--,w[i+1]--,w[i+2]--;
		 if(s[i]&&s[i+1]&&s[i+2]) s[i]--,s[i+1]--,s[i+2]--;
    	 if(t[i]&&t[i+1]&&t[i+2]) t[i]--,t[i+1]--,t[i+2]--;
    }
	}
	
	bool f;
	for(int i=1;i<=9;i++){
		if(w[i]==1||s[i]==1||t[i]==1){
			break;
		}
	    if(i==9) f=1;
	}
	return f;
} 
int main() {
	while(scanf("%d",&n)!=EOF) {
		cin >> q;
		for(;n>0;n--) {
			bool flag = 0;
			int dou = 0 ,tri = 0;
			memset(w,0,sizeof(w));
			memset(s,0,sizeof(s));
			memset(t,0,sizeof(t));
			cin  >> cd;
			for(int i=1; i<=27; i+=2) {
				if(cd[i]=='W') w[(int)cd[i-1]-48]++;
				if(cd[i]=='S') s[(int)cd[i-1]-48]++;
				if(cd[i]=='T') t[(int)cd[i-1]-48]++;
				if(cd[i]==q) {
					flag = 1;
					printf("No\n");
					break;
				}
			}
			if(flag) continue;
			for(int i=1; i<=9; i++) {
				if(w[i]==2) dou++;
				if(s[i]==2) dou++;
				if(t[i]==2) dou++;
			}
			if(dou == 7){
				printf("Yes\n");
				continue;
			}
			int judge = 0;
			for(int i=1;i<=9;i++){
				if(w[i]>=2){
					w[i]-=2;
					if(check()){
						judge = 1;
						break;
					}
					else w[i]+=2;
				}
				if(s[i]>=2){
					s[i]-=2;
					if(check()){
						judge = 1;
						break;
					}
					else s[i]+=2;
				}if(t[i]>=2){
					t[i]-=2;
					if(check()){
						judge = 1;
						break;
					}
					else t[i]+=2;
				}
			}
			if(judge) printf("Yes\n");
			else printf("No\n");
		}
	}


	return 0;
}
