
#include <stdio.h>
 
char change(char a[10]){
 	int i;
 	char b[10];
 	for(i=0; i<10; i++){
 			b[i]=a[9-i];
 			printf("%c", b[i]);
	}
 	return(b[10]);
}
int main(){
 	int i;
 	char change(char []);
 	char  charWords[10];
 	printf("Enter 10 characters :\n");
 	for(i=0; i<10; i++){
 		scanf("%c",&charWords[i]);
 		printf("%c", charWords[i]);
	}
	printf("\n");
	change(charWords);
 	return 0;
}
 

