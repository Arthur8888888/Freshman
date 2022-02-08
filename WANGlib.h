/*这是汪宇的第一个C语言函数库

QQ:639094762 

QQ群:699784390 

*/

//冒泡排序 
int maopaoSort(int a[], int n){
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

//选择排序 
int xuanzeSort(int a[], int n){
	int i, j, temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	return a[n];
}

//递归 
int fac(int n){
	if(n==1)
		return(1);
	else
		return(n*fac(n-1));
}

//迭代
int multiplus(int n){
	int a,b=1;
	for(a=1; a<=n; a++){
		b = b * a;
	}
	return b;
}

//猴子吃桃
/*
猴子第一天摘下若干个桃子，当即吃了一半，
还不过瘾，又多吃了一个，第二天早上又将剩下的桃子吃掉一半，
又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。
到第 10 天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少？
*/
int totalSum(int days){
	int sum=1;
	int i;
	for(i=9; i>=1; i--){
		sum = (sum+1) * 2;
	}
 	return(sum);
 } 
 
//字符颠倒顺序
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
