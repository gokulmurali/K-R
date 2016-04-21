 //Write a function reverse(s) that reverses the character string s . Use it to write a program that reverses its input a line at a time.


 #include<stdio.h>
 #include<stdlib.h>
 #define BUFF_SIZE 1024

 char * reverse(char *s){
	int len=0, i, l;
	char *ret_buff;
	ret_buff = (char *)malloc(BUFF_SIZE * sizeof(char));
	for(len=0; s[len] != '\0'; len++);
	l = len;
	for(i=0; i<=len-1; i++, l--){
		ret_buff[i] = s[l-1];
	}
	ret_buff[++i] = '\0';
	return ret_buff;

 }

 int main(){

	int i,count=0;
	char c,buff[BUFF_SIZE], *ret_buff;
	FILE *fp = fopen("sample_text.txt", "r");

	while((c=fgetc(fp)) != EOF){
		if(c == '\n'){
			buff[count] = '\0';
			ret_buff = reverse(buff);
			puts(ret_buff);
			count = 0;
			for(i=0; i<BUFF_SIZE; i++)
				buff[i] = 0;
		}
		else{
			buff[count] = c;
			count++;		
		} 
	}
 	return 0;
 }
