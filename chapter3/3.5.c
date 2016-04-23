/* Write the function itob(n,s,b) that converts the integer n into a base b character representation in the string s . In particular, itob(n,s,16) formats n as a hexadecimal integer in s*/
 
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


 /* Changes the given number to required base in string format with all numbers above 9 represented by letters of English alphabet   
    as represented by A-F(or a-f) for 10-15 in hexa-decimal base system.*/

 char * itob(int n, char * s, int b) {
 	
	int i = 0, num, sign;
	if((sign = n) < 0)
		n = -n;
	do {
		num = n % b;
		if(num > 9)
			num = 'A' + num - 10;
		else
			num = num + '0';

		s[i++] = num; 

	}while( (n = n / b) > 0);
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	return(reverse(s));
 }

 int main() {
 
 	int n, b;
	char s[BUFF_SIZE], * ret;	
	scanf("%d %d", &n, &b);

	ret = itob(n,s,b);
	puts(ret);

	return 0;

 }
