#include<bits/stdc++.h>
using namespace std;
char m[500][500];
int n;
int po_x=0,le_x=0;
char cmd[500][100];
int main(){
    cin >> n;
    for(int i=0;i<n;i++) cin>>cmd[i];
    for(int i=0;i<n;i++){
    	int num = 0;
    	if(cmd[i][0]!='-'){
    		if(cmd[i][1]<'0'||cmd[i][1]>'9'){
    			num = cmd[i][0] - 48;
    			if(strlen(cmd[i])==2){
    				for(int j=26;j<=26+num-1;j++) m[j][i] = cmd[i][1];
				}
				else{
					for(int j=26;j<=26+num-1;j++) m[j][i] = '+';	
				}
				po_x = max (po_x,num);
			}
			else{
				num = (cmd[i][0]-48)*10 + cmd[i][1]-48;
				if(strlen(cmd[i])==3){
    				for(int j=26;j<=26+num-1;j++) m[j][i] = cmd[i][2];
				}
				else{
					for(int j=26;j<=26+num-1;j++) m[j][i] = '+';	
				}
				po_x = max (po_x,num);
			}
		}
		else{
			if(cmd[i][2]<'0'||cmd[i][2]>'9'){
    			num = cmd[i][1] - 48;
    			if(strlen(cmd[i])==3){
    				for(int j=24;j>=24-num+1;j--) m[j][i] = cmd[i][2];
				}
				else{
					for(int j=24;j>=24-num+1;j--) m[j][i] = '+';	
				}
				le_x = max (le_x,num);
			}
			else{
				num = (cmd[i][1]-48)*10 + cmd[i][2]-48;
				if(strlen(cmd[i])==4){
    				for(int j=24;j>=24-num+1;j--) m[j][i] = cmd[i][3];
				}
				else{
					for(int j=24;j>=24-num+1;j--) m[j][i] = '+';	
				}
				le_x = max (le_x,num);
			}
		}
	}
	for(int j=0;j<n;j++) m[25][j] = '-';
	for(int i=25+po_x;i>=25-le_x;i--){
		if(i==25){
			for(int j=0;j<2*n-1;j++) cout<<"-";
		}
		else
		    for(int j=0;j<n;j++) cout<<m[i][j]<<" ";
		cout<<endl;
	}
	return 0;
} 

