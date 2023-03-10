#include<stdio.h>



main(){
	int n;
	printf("enter your number :  ");
	scanf("%d",&n);
	
	if(n%15==0){
		printf("YES number is divisible by 3 and 5 both");
	}
	else{
		printf("number is NOT divisible by 3 and 5 both");
	}
}
