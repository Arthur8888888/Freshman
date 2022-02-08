#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>//便于引用isalpha(); 
/*
//第一种情况：只能进行一行字符串中的字符数，单词数计算； 
int main(){
	int len,i=0;//字符数,辅助变量;
	char str[100];//定义字符串； 
	printf("Enter some characters :\n");
    gets(str);//进行字符串的输入； 
	len=strlen(str);//计算字符串中字符的数目； 
	
	int condition, rows=1, words=1;//条件，行数,单词数;
    while(i<=len){
		if(str[i]>='a' && str[i]<='z'){
		    condition==1;
	    }
        else if(str[i]>='A' && str[i]<='Z'){
    	    condition==1;
    	}
    	else if(str[i-1] == '\t' ){
    		condition==1;
		}//限定单词数变化的的条件; 
    	
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
//第二种情况：依次输入字符，输入的同时也在确定行数，单词数，字符数； 

int main(){
	char a;
	int rows=0, lengths=0, words=0;
	printf("Enter some characters to analyse (click '?' to end):\n");
	while(scanf("%c",&a)){//
		if(isascii(a) != 0)//限定当确定为ASCII字符时，字符长度增加; 
		  lengths++;
		if(a=='\n')
		  rows++;
		if(isspace(a)!=0 || a=='\n' ||a=='\t')//输入为空格时和第一个不是空格时，单词数增加； 
	      words++;
		if(a=='?')//定义当出现'?'时，输入停止； 
		  break;	
	}
	printf("the rows of string is %d\n", rows);
	printf("the length of string is %d\n", lengths);
	printf("the words of string is %d\n", words);
	return 0;
}
