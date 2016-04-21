
 //Write a program that prints its input one word per line.
 #include<stdio.h>

 int main(){

	int in=0;
	char c;
	FILE *fp = fopen("sample_text.txt", "r");

	while((c=fgetc(fp)) != EOF){
		if(c== ' ' || c== '\t' || c=='\v' || c=='\n'){
			//printf("\n");
			in=0;
		}
		else{
			if(in==0){
				putchar('\n');
			}
			putchar(c);
			in=1;
		}
	}
	fclose(fp);
	return 0;

 }
