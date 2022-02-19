#include<stdio.h>

int main(){
	
	int a;
	
	while(scanf("%d" , &a) !=EOF){
		
		for(int i=1;i<=a;i++){
			
			for(int j=1;j<=a-i;j++ ){
				
				printf("_");
				
				
			}
			
			for(int x=1;x<=i;x++){
			
				printf("+");
			}
		printf("\n");
		}
		
		
	}
	
	
return 0;
}
