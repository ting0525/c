#include<stdio.h>

int main(){
	
	int a,b,n;  //��J   �Q���� �l�� ���� 
	
	int x,y,z;   
	
	while(scanf("%d%d%d" , &a ,&b ,&n) !=EOF){
		
		x=a/b;
		
		y=a%b;
		
		printf("%d." , x);
		
		for(int i=1;i<=n;i++){
			
			z=y*10/b; 
			               
			y=y*10%b;
			
			printf("%d" , z);
			
		}
		printf("\n");
		
		
	} 
	return 0;
}
