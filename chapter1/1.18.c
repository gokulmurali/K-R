 //Write a program to remove all trailing blanks and tabs from each line of input, and to delete entirely blank lines. 

 #include<stdio.h>
 #define BUFF_SIZE 1024

 int find_index(char buff[], int count){
	int i=0;
	for(i=0; i<=count; i++){
		if(buff[i]>=33 && buff[i]<=126)
			i++;
		else
			continue;
	}

	return i;
 }

 void remove_tail(char buff[], int count){
	int index; 	
	if(count==0)
		return;
	else{
		index = find_index(buff, count+1);
		buff[index+1] = '\n';
		buff[index+2] = '\0';
		puts(buff);
		index=0;
		return;
	}
 }

 int main(){

	int i, count=0;
	char c, buff[BUFF_SIZE];
	FILE *fp = fopen("sample_text.txt", "r");

	while((c = fgetc(fp)) != EOF){
		if(c == '\n'){
			buff[count+1] = '\0';
			remove_tail(buff, count);
			count = 0;
			for(i=0; i<BUFF_SIZE; i++)
				buff[i] = 0;
		}
		else{
			buff[count] = c;
			count++;
		}

	}

	return 0;
	
 }
