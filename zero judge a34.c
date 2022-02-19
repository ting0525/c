#include<stdio.h>

int main(void){
	
	int a[10000],i,b;
	
	while(scanf("%d" , &b) !=EOF){
	
	for(i=0 ; b>0 ; i++){
		
		a[i]=b%2;
		
		b=b/2;
	}
	for(i--;i>=0;i--){
	
	printf("%d" , a[i]);
	
	printf("\n");
	
	}
	printf("\n");
}
	
	
	
	
	
	
	return 0;
} 


/*
{ 
對a除2
取a除2的餘數 
} 
*/
 
