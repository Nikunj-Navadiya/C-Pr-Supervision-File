#include<stdio.h>

// C program to read a file and display its contents.

void main (){
	FILE  *file;
	char ch[50];
	file = fopen("1.txt", "r");
	
	while (fscanf(file,"%s",ch)!=EOF){
		printf("%s ",ch);
	}
}
