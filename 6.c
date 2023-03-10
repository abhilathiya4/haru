#include<stdio.h>

main(){
	
	int a,b,c,d;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	printf("enter c : ");
	scanf("%d",&c);
	printf("enter d : ");
	scanf("%d",&d);
	
	if(a<b){
		
		if(b<c){
			if(c<d){
				printf("d is max");
			}
			else{
				printf("c is max");
			}
		}
		else{
			if(b<d){
				printf("d is max");
			}
			else{
				printf("b is max");
			}
		}
	}

	else{
		if(a<d){
			printf("d is max");
			
		}
		else{
			printf("a is max");
		}
	}
}
