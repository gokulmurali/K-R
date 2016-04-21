 /*Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments do not nest.*/

 #include<stdio.h>
 
 int main(){
 	
	int i,prev, quote_flag=0, single_comment_flag=0, multi_comment_flag=0;
	char c;
	FILE *fp = fopen("test.c", "r");
	
	while((c= fgetc(fp)) != EOF){
		if(c == '"' && !(single_comment_flag || multi_comment_flag) && (prev != '\'')){
			if(quote_flag){
				putchar(c);
				quote_flag = 0;
			}
			else{
				putchar(c);
				quote_flag = 1;
			}
		}
		else if(c == '/' && !quote_flag){
			if((single_comment_flag || multi_comment_flag))
				continue;
			else{	
				prev = c;
				if((c = fgetc(fp)) == '*')
					multi_comment_flag = 1;
				else if(c == '/')
					single_comment_flag = 1;
				else if(c == EOF)
					break;
				else
					putchar(c);			
			}
		}
		else if(c == '\n' && single_comment_flag){
			putchar(c);			
			single_comment_flag = 0;
		}
		else if(c == '*' && multi_comment_flag){
				prev = c;
				if((c = fgetc(fp)) == '/')
					multi_comment_flag = 0;
				else if(c == EOF)
					break;
				else{
					
					continue;
				}
			
		}
		else
			if(!(single_comment_flag || multi_comment_flag))
				putchar(c);
		prev = c;		
 	}

 	return 0;
 }
