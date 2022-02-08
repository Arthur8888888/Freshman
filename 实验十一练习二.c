#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int Num;
	int Math;
	int English;
	int Chinses;
	char Name[5];
	float averageValue;
}Stud;

int main(){
	int i; 
	Stud stud[5];
	FILE *inFile;
	char response;
	if((fopen("stud.txt", "r"))!= NULL){
		printf("The file was opened successfully.\n");
	    printf("\nDo you want to continue and overwrite it\n");
	    printf("Click Y or N to select\n");
	    scanf("%c",&response);
	    if(response=='n'){
	    	printf("The existing file will not be overwrited.\n");
	    	exit(1);
		}
	}
	inFile = fopen("stud.txt", "w");
	
	printf("Enter students'number, name, math, English, Chinses:\n");
	for(i=0; i<5; i++){
		scanf("%d %s %d %d %d",&(stud[i].Num),stud[i].Name,
		&(stud[i].Math),&(stud[i].English),&(stud[i].Chinses));
	    stud[i].averageValue=(stud[i].Math+stud[i].English+stud[i].Chinses)/3;
	}
		
	fputs("NUMBER  NAME  MATH  ENGLISH  CHINSES  AVERAGENUM\n", inFile);
	for(i=0; i<5; i++){
		fprintf(inFile, "%4d   %4s   %3d   %4d   %7d   %6.2f\n",
		 stud[i].Num,stud[i].Name,stud[i].Math,stud[i].English,stud[i].Chinses,
		 stud[i].averageValue);
	}
	
	fclose(inFile);
	return 0;
}

