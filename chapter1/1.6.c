 //Verify that the expression getchar() != EOF is 0 or 1.
 
 #include<stdio.h>

 int main(){

	char c;
	printf("Value of EOF is %d\n", EOF);
	printf("Whether getchar() != EOF is 0 or 1? %d\n", getchar() !=EOF);
		

	return 0;
 }
