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
/*�p�G a = 1  �п�X  b+c 

�p�G a = 2  �п�X  b-c 

�p�G a = 3  �п�X  b*c 

�p�G a = 4  �п�X  b/c  

���G�Хξ�?��X */
