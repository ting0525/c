#include<stdio.h>
#include <stdlib.h>
int main(void){
	int num,sum=0,a=0;
	scanf("%d" , &num);
	while(num>0){
		sum=num%10+a;  //0=1230%10+0         3=123%10+0          32=12%10+30
		num=num/10;    //123=1230/10         12=123/10           1=12/10
		sum=sum*10;    //0=0*10              30=3*10             320=32*10 
		a=sum;   	   //0=0                 30=30               320=320
	}                  //num=123 sum=0 a=0   num=12 sum=30 a=30
	printf("%d" , a/10);	
	
	
	
	return 0;
} 
//printf("%d" , num%10);
//num=num/10; 
