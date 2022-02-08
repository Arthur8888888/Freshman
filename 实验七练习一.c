#include <stdio.h>
#define ROW 10
void main(){
	int i, j;
    int arr[ROW+1][ROW+1]={1};
	for(i=1; i<ROW+1; i++){
		for(j=1; j<=i; j++){
			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			printf("%4d ", arr[i][j]);	
		}
		printf("\n");
	}
}

