 /* Write a version of itoa that accepts three arguments instead of two. The third argument is a minimum field width; the converted number must be padded with blanks on the left if necessary to make it wide enough.*/
 
 #include<stdio.h>
 #include<limits.h>
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

 //Adding enough blanks ' ' to make the string of given width to itoa function of exercise 3.4
 char * itoa(int n, char * s, int width) {

	unsigned int n1;
	int i=0, sign;

	if((sign = n) < 0)
		n1 = -n;
	else
		n1 = n; 
	
	 do {
	        s[i++] = (n1 % 10) + '0';
		width--;
	    } while ((n1 /= 10) > 0);
    	if (sign < 0) {
        	s[i++] = '-';
		width--;
    	}
	while((width--) > 0)
		s[i++] = ' ';

    	s[i] = '\0';

    	return(reverse(s));
		
 }

 int main() {

 	int n, width;
	char s[BUFF_SIZE], * ret;
	scanf("%d %d", &n, &width);
	ret = itoa(n, s, width);
	puts(ret);
	ret = itoa(INT_MIN, s, width);
	puts(ret);
	
	
 }
