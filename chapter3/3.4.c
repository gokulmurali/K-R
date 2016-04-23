 /*In a two's complement number representation, our version of itoa does not handle the largest negative number, that is, the value of n equal to -(2 to the power (wordsize - 1)) . Explain why not. Modify it to print that value correctly regardless of the machine on which it runs.*/

 #include<stdio.h>
 #include<limits.h>
 #include<stdlib.h>
 #define BUFF_SIZE 1024

 //Same reverse function written in chapter 2.
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

 /* The reason itoa() function given in k&r fails is because in two's complement system the range of numbers is (-2^(N-1) to 2^(N-1) - 1), 
    where N is the CHAR_BIT - 1 since the msb is used as sign bit. So there is no way to represent -2^(N-1) as only numbers upto 2^(N-1)-1
    suppoted by the implementation. Solution is to use unsigned integer for coverting into string as unsigned int does not use msb for sign
    bit or it can be compared with INT_MIN before making the string and and assigning it by default.*/
	
 char * itoa(int n, char * s) {

	unsigned int n1;
	int i=0, sign;

	if((sign = n) < 0)
		n1 = -n;
	else
		n1 = n; 
	
	 do {
	        s[i++] = (n1 % 10) + '0';
	    } while ((n1 /= 10) > 0);
    	if (sign < 0) {
        	s[i++] = '-';
    	}
    	s[i] = '\0';

    	return(reverse(s));
		
 }

 int main() {

 	int n;
	char s[BUFF_SIZE], * ret;
	scanf("%d", &n);
	ret = itoa(n, s);
	puts(ret);
	
	ret = itoa(INT_MIN, s);
	puts(ret);
	
	
 }
