#include <stdio.h>
int week(int x,int y,int z){
	if(y==1||y==2) return week(x,y+12,z-1);
	else {
		int ans = (x+2*y+3*(y+1)/5+z+z/4-z/100+z/400)%7;
		return ans+1;
	}
}
void work(int x){
	if(x==1) printf("Monday");
	if(x==2) printf("Tuesday");
	if(x==3) printf("Wednesday");
	if(x==4) printf("Thursday");
	if(x==5) printf("Friday");
	if(x==6) printf("Saturday");
	if(x==7) printf("Sunday"); 
}
void day(int x){
	if(x%10==1){
		printf("st");
	}
	else if(x%10==2){
		printf("nd");
	}
	else if(x%10==3){
		printf("rd");
	}
	else{
		printf("th");
	}
}
void month(int x){
	if(x==1) cout<<"January";
	if(x==2) cout<<"February";
	if(x==3) cout<<"March";
	if(x==4) cout<<"April";
	if(x==5) cout<<"May";
	if(x==6) cout<<"June";
	if(x==7) cout<<"July";
	if(x==8) cout<<"August";
	if(x==9) cout<<"September";
	if(x==10) cout<<"October";
	if(x==11) cout<<"November";
	if(x==12) cout<<"December";
}
int year(int x){
	return 2000+x;
}
int main(){
	int d,m,y;
	printf("Enter date (mm/dd/yy):"); 
	scanf("%d/%d/%d",&m,&d,&y);
	printf("Dated this %d",d);
	day(d);
	printf(" day of ");
	month(m);
	printf(", %d\n",year(y));
	printf("This day is ");
	work(week(d,m,y));
	return 0;
}
