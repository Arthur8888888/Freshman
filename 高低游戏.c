#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int times;
	int number;
	
	int randValue;
	srand(time(NULL));
	randValue=1+(int)rand()%100;
	
	printf("Enter a number:\n");
	for(times=1; times<=7; times++){
		scanf("%d", &number);
		if(number<randValue){
			printf("Wrong Number, Try Again\n");
			if(times==7){
				printf("Sorry, you lose\n");
			}
		}
		else if(number>randValue){
			printf("Wrong Number, Try Again\n");
		}
		else if(number==randValue){
			printf("Hooray, You have won!");
			break;
		}
	}

	return 0;
}
