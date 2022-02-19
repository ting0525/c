#include<stdio.h>

#include<string.h>

int  main(){
	
	char arr[1000],a;
	
	int b,c=1;
	
	scanf("%s" , arr);
		
	b=strlen(arr);
		
	for(int i=0;i<b/2;i++){
		
		if(arr[i]!=arr[b-1-i]){
			
			c=0;
			
			break;	
		
		}
	}
	if(c==0)
		
		printf("NO");
		
	else
	
	
		printf("YES");

	
	return 0;

}	
		

