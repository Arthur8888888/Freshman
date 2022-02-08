#include <stdio.h>
#include <time.h> 

int main(){
	int n;
	printf("How many numbers that you want to sort:\n");
	scanf("%d", &n);
	int i, randNum, num[n];
	srand(time(NULL));
	for(i=0;i<n;i++){
		randNum = 1 + (int)rand() % 100;
		num[i]=randNum;
	}
    numSort(num,n);
	for(i=0;i<n;i++){
		printf("%4d\n",num[i]);
	}
	return 0;
} 

int numSort(int a[], int n){
	int i, j, temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	return a[n];
}
