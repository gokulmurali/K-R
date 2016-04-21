 /*Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/

 //horizontal histogram
 #include<stdio.h>

 int main(){
	
	int in_flag=0;
	char c;
	FILE *fp = fopen("sample_text.txt", "r");

	while((c=fgetc(fp)) != EOF){
		if(c== ' ' || c == '\t' || c == '\n' || c=='\v'){
			if(in_flag){
				putchar('\n');
				in_flag=0;
			}
		}
		else{
			putchar('-');
			in_flag=1;
		}

	}


	return 0;
 }
