 /*Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2 . Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z . Arrange that a leading or trailing - is taken literally.*/

 #include<stdio.h>
 #define MAX_LEN 1024

 /*A helper function that checks whether the range specified by '-' is a valid range and a valid character follows '-'*/
 int check_range(char * s, int i) {

	if(isdigit(s[i-1]) && isdigit(s[i+1])) return 1;
	else if(isalpha(s[i-1]) && isalpha(s[i+1])) return 1;
	else if(s[i+1] = '\n') return 1;
	else return 0;
 }

 /*expand functions expands the range specified by characters before and after character '-'. Note that only incremental range is expanded and valid
 characters must be present before and after '-' means 0-a, a-9 are not allowed while 0-9, a-z etc. are allowed*/
 void expand(char * s1, char * s2) {

 	int i, j, k;
	
	for(i=0, j=0; s1[i] != '\n' && j < MAX_LEN - 1; i++) {
		if(i == 0 && s1[i] == '-');		
		else if(s1[i] == '-') {
			if(check_range(s1, i)) {
				for(k = s1[i-1] + 1 ; k < s1[i+1] ; k++  )
					s2[j++] = k;
				}
			else {
				printf("Invalid operator or range %c %c %c\n", s1[i-1], s1[i], s1[i+1]);
			}		
		}
		else s2[j++] = s1[i];

 	}
	s2[j] == '\0';
	puts(s2);
 }  

 int main() {
 
	char s1[MAX_LEN], s2[MAX_LEN];
	
	fgets(s1, sizeof(s1), stdin);
	expand(s1, s2);
	
 	return 0;
 }
