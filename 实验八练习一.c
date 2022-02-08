#include <stdio.h>
#include <stdlib.h>

void main(){
	int num;
	char str[100];
	printf("Enter a integer number:\n");
	scanf("%d", &num);
	itoa(num, str, 2);
	puts(str);
	
}

