 //Write a program that prints its input one word per line.
 
 #include<stdio.h>

 int main(){

	int nw, i=0;
	char c, buff[100];
	FILE *fp = fopen("sample_text.txt", "r");

	while((c=fgetc(fp)) != EOF){
		if(c== ' ' || c== '\t' || c=='\v' || c=='\n'){
			puts(buff);
			i=0;
			buff[i]='\0';
		}
		else{
			buff[i] = c;
			i++;
			buff[i]='\0';

		}
	}
	fclose(fp);
	return 0;

 }
