 //Write a program to print all input lines that are longer than 80 characters.
 
 #include<stdio.h>

 int main(){

	int count=0,i;
	char c, buff[1024];
	FILE *fp = fopen("sample_text.txt", "r");

	while((c=fgetc(fp)) != EOF){
		if(c == '\n'){
			buff[count]=c;
			buff[count+1] = '\0';
			if(count > 80)
				puts(buff);			
			count=0;
			for(i=0;i<1024;i++)
				buff[i]=0;
		}
		else{
			buff[count]=c;
			count++;
		}
	}
 	return 0;
 }
