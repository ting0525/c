#include<stdio.h>

int main(){
	
	int a;
	
	while(scanf("%d" , &a) !=EOF){
	
	
	for(int i=1 ; i<a; i++){
		
		if(i%7!=0)
			printf("%d " , i); 
			
	}
	printf("\n");
}
	return 0;
}
