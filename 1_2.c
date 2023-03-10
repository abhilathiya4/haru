#include<stdio.h>

main(){
	
	float n,a;
	float sum = 0;
	
	
	printf("enter your units: ");
	scanf("%.2f",&n);
	
	if(n<50){
		sum = n*0.50;
		printf("%.2f",sum);		
	}
	else if(n<150){
		sum = 25 + (n-50)*0.75;
		printf("%.2f",sum);
	}
	else if(n<250){
		sum = 25 + 75 + (n - 150)*1.20;
		printf("%.2f",sum);
	}
	else if(n>250){
		sum = 25+75+120+ (n-250)*0.50;
		printf("%.2f",sum);
	}
	
	 a = sum + sum*0.2;
	 printf("your total amount : %.2f",a);
}
