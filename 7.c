#include<stdio.h>

main(){
	
	int n;
	int sum=0;
	int a[n][n];
	int i,j;
	
	printf("enter rows and columns:");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++){
		for(j=0; j<n ; j++){
		
			printf("enter elements of matrix[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);	
			
	}

	printf("\n");
	
	
	}


	
}



