#include <stdio.h>

struct student{
 	char stuName[50];
 	int stuNum;
 	int Math;
 	int English;
 	int C;
 	float average;
}stud; 

int putInfo();
int main(){
 	struct student ;
 	int i;
 	char j;
 	FILE *inFile;
 	inFile=inFile=fopen("student.txt","w");
	printf("student.txt has been set up successfully\n");
	printf("\nEnter students'name, number, math, English, Chinses:\n");
	fputs("Name Number math English  C  Average\n", inFile); 
 	for(i=0;i<5;i++){
 		printf("Enter %d student information:\n",i+1);
 		putInfo();
 		fopen("student.txt","a+");
 		fprintf(inFile,"%3s %4d %4d %8d %4d %6.2f\n",
	    stud.stuName,stud.stuNum, stud.Math, 
		stud.English, stud.C, stud.average);
	} 
 	fclose(inFile);
 	return 0;
}
int putInfo(){
 	scanf("%s %d %d %d %d", stud.stuName,
	&stud.stuNum,&stud.Math,&stud.English,&stud.C);
	 
 	stud.average = (stud.Math + stud.English + stud.C)/3;
 	return 0;
}
 
