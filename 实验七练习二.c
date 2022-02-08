#include <stdio.h>
 
void main(){
    int N=12;
	int month, monthSum[N+1];
	monthSum[0]=2;
	printf("%4d", monthSum[0]);
	for(month=1; month<=N; month++){
	    monthSum[month]=monthSum[month-1]+monthSum[month-2];
	    printf("%4d", monthSum[month]);
	}
	
}
