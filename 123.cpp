#include <bits/stdc++.h>
using namespace std;
int t;
int a,b;
char d[10004];
int ans = 0;
int main(){
	cin>>t;
	while(t--){
		memset(d,0,sizeof(d));
		ans = 0;
		scanf("%d%d%s",&a,&b,&d);
		
		int last = -1;
		int len = strlen(d);
		for(int i=0;i<len;i++){
			if(d[i]=='1'&&last==-1){
				ans = a;
				last = i;
				continue;
			}
			if(d[i]=='1'){
				ans += min(a,b*(i-last-1));
				last = i;
			}
		}
		printf("%d\n",ans);
	}
	
	
	return 0;
}
