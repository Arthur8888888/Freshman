/*��������ĵ�һ��C���Ժ�����

QQ:639094762 

QQȺ:699784390 

*/

//ð������ 
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

//ѡ������ 
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

//�ݹ� 
int fac(int n){
	if(n==1)
		return(1);
	else
		return(n*fac(n-1));
}

//����
int multiplus(int n){
	int a,b=1;
	for(a=1; a<=n; a++){
		b = b * a;
	}
	return b;
}

//���ӳ���
/*
���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬
������񫣬�ֶ����һ�����ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬
�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ����
���� 10 ���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��٣�
*/
int totalSum(int days){
	int sum=1;
	int i;
	for(i=9; i>=1; i--){
		sum = (sum+1) * 2;
	}
 	return(sum);
 } 
 
//�ַ��ߵ�˳��
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
