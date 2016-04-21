/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/

 //Horizontal histogram, more organised
 #include<stdio.h>
 #define MAXLEN 15	

 int main(){
	
	int words[MAXLEN]={0},in_flag=0, count=0, high_count=0,i,j;
	char c;
	FILE *fp = fopen("sample_text.txt", "r");

	while((c=fgetc(fp)) != EOF){
		if(c== ' ' || c == '\t' || c == '\n' || c=='\v'){
			if(in_flag){
				if(count<=MAXLEN)
					words[count-1]++;
				else
					high_count++;
				count=0;
				in_flag=0;
			}
		}
		else{
			count++;
			in_flag=1;
		}

	}
	printf("LENGTH  ____________\n");
	for(i=0;i<MAXLEN;i++){
		printf("%d\t|",i);
		for(j=0;j<words[i];j++)
			printf("#");
		printf("\n");
	}
	printf(">15");
	for(i=0;i<high_count;i++)
		printf("\t|#");
	printf("  \t|____________\n");


	return 0;
 }
