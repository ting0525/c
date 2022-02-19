#include<stdio.h>

int main(void){
		
	int frequency , a , b , c , d, difference1 , difference2 , difference3 , difference4 , five1 , five2;
	
	scanf ("%d" , &frequency);
	
	for(frequency ; frequency>0 ; frequency--){
	
		scanf ("%d %d %d %d" , &a , &b , &c , &d);
		
		difference1 = b - a;  //difference1 = 1 2 ¶µ®t  
		
		difference2 = d - c;  //difference2 = 3 4 ¶µ®t 
		
		difference3 = b / a;
		
		difference4 = d / c;
		
		five1 = d + difference1;
		
		five2 = d * difference3;
		
		if (difference1 == difference2)
		
		printf ("%d %d %d %d %d\n", a , b , c , d , five1);
		
		else if (difference3 == difference4)
		
		printf ("%d %d %d %d %d\n", a , b , c , d , five2);
	}	
		return 0;
		
	
	
	
	
} 


