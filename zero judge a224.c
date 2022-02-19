#include<stdio.h>

#include <stdlib.h>

#include <math.h>

int main(void){
	long long int a,b,c,count,i;
	
	scanf ("%lld" , &count);
	
	for(i=0; i<=count;i++){
		scanf ("%lld %lld %lld" ,&a,&b,&c);
	
		if (a==1)
			printf("%lld \n" , b+c);
		if (a==2)
			printf("%lld \n" , b-c);
		if (a==3)
			printf("%lld \n" , b*c);
		if (a==4)
			printf("%lld \n" , b/c);	
	}

	return 0;
} 
/*如果 a = 1  請輸出  b+c 

如果 a = 2  請輸出  b-c 

如果 a = 3  請輸出  b*c 

如果 a = 4  請輸出  b/c  

結果請用整?輸出 */
