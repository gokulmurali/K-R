 //Write a program to copy its input to its output, replacing each tab by \t , each backspace by \b , and each backslash by \\ . This makes tabs and backspaces visible in an unambiguous way.

 #include<stdio.h>

 int main(){

	char c;
	FILE *fp = fopen("sample_text.txt", "r");

	while((c=fgetc(fp)) != EOF){
		if(c=='\t'){
			c='\\';
			putchar(c);
			c='t';
			putchar(c);
			continue;
		}
		else if(c=='\b'){
			c='\\';
			putchar(c);
			c='b';
			putchar(c);
			continue;
		}
		else{
			putchar(c);
		
		}
	
	}

	return 0;
 }
