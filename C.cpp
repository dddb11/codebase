#include <stdio.h>
#include <cstring>
#include <cmath>
int t;
int a,b;
int ans = 0;
int min(int a,int b){
	if(a<b) return a;
	return b;
}
int main(){
	scanf("%d",&t);
	while(t--){
		char d[10005];
	   scanf("%d%d%s",&a,&b,&d);
	   ans = 0;
	   int flag = 0;
	   int len = strlen(d);
	   int cnt=0;
	   for(int i=0;i<len;i++){
	   	   if(d[i]=='1') flag = 1,ans+=min(a,b*cnt),cnt=0;
	   	   if(d[i]=='0'&&flag){
	   	          cnt++;
			}
	   }
	   
	   if(flag) ans+=a; 
	   printf("%d\n",ans);
	}
	
	
	return 0;
}
