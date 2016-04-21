 /*Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column.*/

 #include<stdio.h>
 #define BUFF_SIZE 1024
 #define LINE_SIZE 10

 void fold_line(char buff[], int count){
	int i, space_loc,j;
	char fold[LINE_SIZE+2];
	while(count){
		if(count > LINE_SIZE){
			space_loc = LINE_SIZE-1;
			for(i=space_loc; i>=0; i--){
				if(buff[i] == ' '){
					space_loc = i;
					break;
				}
			}

			for(i=0; i<=space_loc; ++i)
				fold[i] = buff[i];
		
			fold[i] = '\0';	
			puts(fold);
			j = i;
			for(i=0; j<=count;++j,++i)
				buff[i] = buff[j];

			count = count - space_loc;
			}
			else{
				buff[count] = '\0';
				count = 0;
				puts(buff);
				return;
			}	
		}


	 }

 int main(){

 	int i, count=0;
	char buff[BUFF_SIZE], c;
	FILE *fp = fopen("sample_text.txt", "r");

	while((c = fgetc(fp)) != EOF){
		if(c == '\n'){
			buff[count] = '\n';
			fold_line(buff, count);
			count = 0;
			for(i=0; i<BUFF_SIZE; i++)
				buff[i] = 0;
		}
		else{
			buff[count] = c;
			count++;
		}
			
		
		
	}
		
 }
