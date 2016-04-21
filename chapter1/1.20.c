 /*Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?*/

 #include<stdio.h>
 #define TAB 4

 int main(){

	char c;
	int i, count=0,j;
	FILE *fp = fopen("sample_text.txt", "r");

	while((c = fgetc(fp)) != EOF){
		if(c == '\n'){
			putchar('\n');
			count = 0;
		}
		if(c == '\t'){
			j = TAB - (count % TAB);
			for(i=0;i<j;i++)
				putchar(' ');
		}
			
		else{
			putchar(c);
			count++;
		}
	}
	return 0;
 }
