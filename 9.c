#include<stdio.h>

main(){
	
	int i,j;
	char k = 0 ;
	
	for(i= 'a' ; i<='e' ; i++){
		for(j=i ; j>='a'; j-- ){
			printf("%c",j);
			
		}
		printf("\n");
	}
}
