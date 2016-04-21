 //Write a program to count blanks, tabs, and newlines.

 #include<stdio.h>

 int main(){

 	int nb=0, nl=0, nt=0;
	char c;
	FILE *fp;

	fp = fopen("sample_text.txt", "r");
	
	while((c=fgetc(fp)) != EOF){
		printf("%c", c);
		if(c== ' ')
			++nb;
		else if(c=='\t')
			++nt;
		else if(c=='\n')
			++nl;
		else
			continue;

	}
	printf("Blanks:%d\nNewlines:%d\nTabs:%d\n",nb,nl,nt);

	return 0;
 }
