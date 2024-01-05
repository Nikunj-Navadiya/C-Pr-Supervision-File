#include<stdio.h>

// C program to create a file and write data into file.

void main (){
	FILE  *file;
	char ch[50];
	file = fopen("1.txt", "w");
	printf("Hello World....!");
	fprintf(file,"Hello World....!",ch);
}
