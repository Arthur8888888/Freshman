#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>//��������isalpha(); 
/*
//��һ�������ֻ�ܽ���һ���ַ����е��ַ��������������㣻 
int main(){
	int len,i=0;//�ַ���,��������;
	char str[100];//�����ַ����� 
	printf("Enter some characters :\n");
    gets(str);//�����ַ��������룻 
	len=strlen(str);//�����ַ������ַ�����Ŀ�� 
	
	int condition, rows=1, words=1;//����������,������;
    while(i<=len){
		if(str[i]>='a' && str[i]<='z'){
		    condition==1;
	    }
        else if(str[i]>='A' && str[i]<='Z'){
    	    condition==1;
    	}
    	else if(str[i-1] == '\t' ){
    		condition==1;
		}//�޶��������仯�ĵ�����; 
    	
		if(str[i-1] == '\n'){ 
			rows++;
		}
		if(str[i-1] == ' ' || condition==1){
			words++;
		}
		i++;
	}
	printf("the rows of string is %d\n", rows);
	printf("the length of string is %d\n", len);
	printf("the words of string is %d\n", words);
	
	return 0;
}
*/
//�ڶ�����������������ַ��������ͬʱҲ��ȷ�����������������ַ����� 

int main(){
	char a;
	int rows=0, lengths=0, words=0;
	printf("Enter some characters to analyse (click '?' to end):\n");
	while(scanf("%c",&a)){//
		if(isascii(a) != 0)//�޶���ȷ��ΪASCII�ַ�ʱ���ַ���������; 
		  lengths++;
		if(a=='\n')
		  rows++;
		if(isspace(a)!=0 || a=='\n' ||a=='\t')//����Ϊ�ո�ʱ�͵�һ�����ǿո�ʱ�����������ӣ� 
	      words++;
		if(a=='?')//���嵱����'?'ʱ������ֹͣ�� 
		  break;	
	}
	printf("the rows of string is %d\n", rows);
	printf("the length of string is %d\n", lengths);
	printf("the words of string is %d\n", words);
	return 0;
}
