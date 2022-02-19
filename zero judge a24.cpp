#include<stdio.h>

int main(){
	
	int a,b,c;
	
	while(scanf("%d%d" , &a, &b )!=EOF){
		
		while(a!=0&&b!=0){
			
			if(a>=b)
				
				a=a%b;
				
			else if(a<b)	
			
				b=b%a;
			
		}
		
        if(a>=b)
				
			c=a;
				
		else if(a<b)	
			
			c=b;
		
		printf("%d" , c);
			
				
		
	}
	
	return 0;
} 
