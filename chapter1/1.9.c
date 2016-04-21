 //Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank

 #include<stdio.h>

 int main(){

 	int flag=0;
	char c;
	FILE *fp = fopen("sample_text.txt", "r");

	while((c=fgetc(fp)) != EOF){
		if(c==' '){
			if(flag == 0){
				printf("%c", c);
				flag = 1;
			}
			else
				continue;
		}
		else if(c=='\v' || c=='\t'){
			if(flag == 0){
				c = ' ';
				printf("%c", c);
				flag = 1;
			}
			else
				continue;
		}
		else{
			if(flag==1)
				flag=0;
			printf("%c", c);
		
		}
	
	}

	return 0;
 }
