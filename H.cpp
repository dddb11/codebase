#include<bits/stdc++.h>
using namespace std;
int a[10][10][20];
int ans[20];
int n;
int x,y;
int cnt = 0;
int c(int x,int y,int p){
	if(a[x][y][p]&&a[x+1][y][p]&&a[x+2][y][p]&&a[x+3][y][p]&&!a[x+4][y][p]) return 1;
	if(a[x][y][p]&&a[x+1][y-1][p]&&a[x+1][y+1][p]) return 2;
	if(a[x][y][p]&&a[x][y+1][p]&&a[x+1][y+2][p]&&!a[x][y+2][p]) return 3;
	if(a[x][y][p]&&a[x+1][y-1][p]&&a[x+2][y-2][p]) return 4;
	if(!a[x+2][y+2][p]&&a[x+3][y+2][p]&&!a[x+4][y+2][p]&&!a[x+3][y][p]) return 5;
	if(!a[x+1][y][p]&&!a[x+2][y][p]&&!a[x+3][y][p]) return 7;
	if(a[x+1][y][p]&&!a[x+2][y][p]&&!a[x+3][y][p]) return 8;
	if(a[x][y+1][p]&&!a[x+1][y+1][p]&&a[x+2][y+1][p]&&!a[x+3][y+1][p]&&a[x+4][y+2][p]) return 9;
	if(a[x+1][y][p]&&a[x+2][y][p]&&a[x+3][y][p]&&a[x+4][y][p]&&a[x+5][y][p]) return 0;
	return 6;
}
int main(){
	cin >> n;
	memset(a,0,sizeof(a));
	while(n--){
		x = 0,y = 0;
		cnt++;
		for(int i=1;i<=6;i++) for(int j=1;j<=6;j++) cin>>a[i][j][cnt];
	    for(int i=1;i<=6;i++){
	    	for(int j=1;j<=6;j++){
	    		if(a[i][j][cnt]){
	    			x = i , y = j;
	    			break;
				}
 			}
 			if(x) break;
		}
		ans[cnt] = c(x,y,cnt);
		
	} 
	for(int i=1;i<=cnt;i++) cout<<ans[i]<<" ";
	
	return 0;
}
