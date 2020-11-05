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
	if(x==21||x==31){
		printf("st");
	}
	else if(x==22){
		printf("nd");
	}
	else if(x==23){
		printf("rd");
	}
	else{
		printf("th");
	}
}
void month(int x){
	if(x==1) printf("January");
	if(x==2) printf("February");
	if(x==3) printf("March");
	if(x==4) printf("April");
	if(x==5) printf("May");
	if(x==6) printf("June");
	if(x==7) printf("July");
	if(x==8) printf("August");
	if(x==9) printf("September");
	if(x==10) printf("October");
	if(x==11) printf("November");
	if(x==12) printf("December");
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
