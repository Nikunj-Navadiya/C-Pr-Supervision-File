#include <stdio.h>

// C program to write even, odd  number in seprate file like odd.txt , even.txt.

void main (){
	FILE *file1;
	FILE *file2;
	file1 = fopen ("Even.txt","w");
	file2 = fopen ("Odd.txt","w");
	
	int no,i;
	printf("Enter No :- ");
	scanf("%d",&no);
	
	for(i=1; i<=no; i++){
		if(i%2==0){
			printf("Even Number :- %d \n",i);
			fprintf(file1," %d ",i);
		}else{
			printf("Odd Number :- %d \n",i);
			fprintf(file2," %d ",i);
		}
	}
}

