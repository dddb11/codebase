#include <bits/stdc++.h>
using namespace std;
char a[1000];
int cnt = 0;
int st[1000];
int n = 0;
struct im{
	char a[1000];
	int num;
}e[1000];
int main(){
	while(cin>>a){
		for(int i=0,j;i<strlen(a);i++){
		    char t[1001];
		    memset(t,0,sizeof(t));
		    if(a[i]=='0'){
		    	while(a[i]>='0'&&a[i]<='9') i++;
			}
			if((a[i]>'0'&&a[i]<='9')&&(a[i+1]>='0'&&a[i+1]<='9')){
			   for(j=i;j<strlen(a);j++){
			   	  if(a[j]<'0'||a[j]>'9'){
			   	  	    i = j;
			   	  	    break;
					}
				   t[j-i] = a[j];
				   if(j==strlen(a)-1){
				   	i=j;
				   	break;
				   }
			   }
			   int flag = 0;
			   for(int i=1;i<=n;i++){
			   	if(strcmp(t,e[i].a)==0) {
			   		flag = i;
			   		break;
				   } 
			   }
			   if(flag) e[flag].num++;
			   else{
			   	n++;
			   	for(int k=0;k<strlen(t);k++) e[n].a[k] = t[k];
			   	e[n].num=1;
			   }
		   }
        }
    }
	for(int i=1;i<=n;i++){
		int flag = 0;
		for(int j=0;j<strlen(e[i].a);j++){
			if(e[i].a[j]!=e[i].a[strlen(e[i].a)-j-1]) {
				flag = 1;
				break;
			}
		}
		if(flag) e[i].num = 0;
	}
	int max1 = -1;
	for(int i=1;i<=n;i++) max1 = max (max1 , e[i].num);
	if(max1 == 0||max1 == -1) {
		cout<<"None";
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(e[i].num==max1) {
			cnt++;
			st[cnt] = i;
		} 
	}
	
	for(int i=1;i<=cnt;i++){
		for(int j=1;j<=cnt;j++){
			int x = st[i];
			int y = st[j];
			if(strlen(e[x].a) > strlen(e[y].a)) swap(st[i],st[j]);
			if(strlen(e[x].a) == strlen(e[y].a)){
				for(int k=0;k<strlen(e[x].a);k++){
					if(e[x].a[k] > e[y].a[k]){
						swap(st[i],st[j]);
						break;
					}
				}
			}
		}
	}
	
	
	for(int i=cnt;i>=1;i--){
	    cout<<e[st[i]].a <<" "<<e[st[i]].num<<endl;
	}
	
	return 0;
}
