#include<stdio.h>

main(){
	
	int i,j,k=1;

	char a='A';
	
	for(i=1; i<=5; i++){
		for(j=1; j<=5; j++){
			if(i%2!=0){
				printf("%d",k);
				k++;
			}else{
				printf("%c ",a++);
			}
		}
	
	printf("\n");
}

}
