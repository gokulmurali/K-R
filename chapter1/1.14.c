
 //Write a program to print a histogram of the frequencies of different characters in its input.

 #include<stdio.h>
 #define MAXLEN 128	

 int main(){
	
	int max,words[MAXLEN]={0},in_flag=0, count=0, high_count=0,i,j;
	char c;
	FILE *fp = fopen("sample_text.txt", "r");
	
	while((c=fgetc(fp)) != EOF){
		words[c]++;
	}
	//for(i=0;i<MAXLEN;i++)
	//	printf("%d\t%d\n",i,words[i]);
	
	max = words[33];
	for(i=33;i<MAXLEN;i++)
		if(words[i]>max)
			max = words[i];

	printf("COUNT\n");
	for(i=max; i>0; i--){
		printf("%d\t|",i);
		for(j=33;j<MAXLEN-1;j++){
			if(words[j]>=i)
				printf("#");
			else
				printf(" ");
		}

		printf("|\n");
		
	}

	printf(" \t------------------------------------------------------------------------------------------------\nCHARS");
	printf("  \t ");
	for(i=33;i<MAXLEN-1;i++)
		printf("%c",i);

	printf("\n");
	
	return 0;
 }
