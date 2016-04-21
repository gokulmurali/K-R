 /*Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.*/


 #include<stdio.h>

 int bitcount(unsigned x){
 	int b;

	/*x = x&(x-1) deletes rightmost bit, since x and x-1 differ only by one bit (lsb, rightmost)*/

 	for (b = 0; x != 0; x &= (x-1)){ 
		//printf("%d\n", x);		 	 
		b++;
	}
 	return b;
 } 

 int main(){

	int x;
	scanf("%d", &x);
	printf("%d\n", bitcount(x));

	return 0;
 }
