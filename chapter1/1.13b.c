/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/
 
 //Vertical Histogram
 #include<stdio.h>
 #define MAXLEN 15	

 int main(){
	
	int max,words[MAXLEN]={0},in_flag=0, count=0, high_count=0,i,j;
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

	max = high_count;
	for(i=0;i<MAXLEN;i++)
		if(words[i]>max)
			max = words[i];

	printf("COUNT\n");
	for(i=max; i>0; i--){
		printf("%d\t|",i);
		for(j=0;j<=MAXLEN;j++){
			if(words[j]>=i)
				printf("# ");
			else
				printf("  ");
		}
		if(high_count >= i)
				printf("#  ");
		else
			printf("   ");

		printf("   |\n");
		
	}
	printf(" \t----------------------------------------\n");
	printf("LEN      1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 >15\n");
	
	return 0;
 }
