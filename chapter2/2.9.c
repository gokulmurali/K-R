 /*Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.*/


 #include<stdio.h>

 int bitcount(unsigned x){
 	int b;

	/*x = x&(x-1) deletes rightmost bit, since x and x-1 differ only by one bit (lsb, rightmost) or 'n' bits of 
	x contains one '1' followed by all zeroes while (x-1) conatins 'n-1' ones making x&(x-1) = 0 
	eg: 8&7 where 8 = 1000 and 7 = 111, 8&7 = 0 and bit count function gives 1 as the answer for 
	number of bits in 8*/

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
