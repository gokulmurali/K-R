 /*Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.*/
 
 #include<stdio.h>

 int lower(int c){
	return (c >= 'A' && c <= 'Z')? c+'a'-'A' : c;
 }

 int main(){
 	
	int c;
	FILE *fp = fopen("sample_text.txt", "r");

	while((c= fgetc(fp)) != EOF){
		c = lower(c);
		putchar(c); 
	}
		
 }
