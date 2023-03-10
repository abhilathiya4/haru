#include<stdio.h>

main(){
	
	int n,i,x;
	int f , l;
	printf("enter your number: ");
	scanf("%s",&n);
	
	l = n%10;
	x = sizeof(n)/sizeof(0);
	
	for(i=0 ; i<x; i++){
		
		f = f/10;
		
		printf("%d",f);
	}
	int sum;
	
	sum = l+f;
	
	printf("%d",sum);
	


	
}
