
 
 /*  for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
		s[i] = c; */

 //Write a loop equivalent to the for loop above without using && or ||

 #include<stdio.h>
 #define MAX_LEN 1000 

 int main(){

	int i=0, lim = MAX_LEN, c;
	char s[MAX_LEN];

	while(i < lim -1){
		if((c == getchar()) != '\n')
			if(c != EOF){
				s[i] = c;
				++i;
			}
	}
	s[i] = '\0';
	puts(s);

 	return 0;
 }
