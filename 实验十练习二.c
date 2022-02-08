#include <stdio.h>
#include <string.h>

int main(){
 	int i;
 	char charWords[10];
 	printf("Enter 10 characters :\n");
 	scanf("%s",&charWords);
 	printf("%s\n",charWords);
	change(charWords);
	puts(charWords);
 	return 0;
}
int change(char * inPut){
 	int i;
 	int len = strlen(inPut);
 	char temp;
 	for(i=0; i<len/2; i++){
 		temp=*(inPut+len-i-1);
 		*(inPut+len-i-1)=*(inPut+i);
 		*(inPut+i)=temp;
	}
 	return(temp);
 }
