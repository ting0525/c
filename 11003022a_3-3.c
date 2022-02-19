#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	int x,a[3],sum=0,count=0;      //x=下注的骰子 a[3]=對比的3個骰子 sum=總共輸或贏多少  count=每一輪的結果
	srand(time(0));
	for(int i=1;i<=10000000;i++){
		x=rand()%6+1;
		for(int j=0;j<3;j++){      
			a[j]=rand()%6+1;
			
			if(x==a[j])           //只要一個骰子=x count+1
				count++;
		}
		if(count==0)             //如果骰子都沒有=x count-1
			count=-1;
		
		
		sum=sum+count;           //count值加到sum
		count=0;                 //把count歸零
		
	}
	printf("%d" , sum);          //印出sum
	
	return 0;
} 
