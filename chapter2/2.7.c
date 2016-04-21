 /*Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.*/

 #include<stdio.h>
 #include<limits.h>
 //#define TYPE_SIZE (X) = ((sizeof(X)* CHAR_BIT) -1)

 int invert(int x, int p, int n){
	int l = 0, inv_n_bits = 0;
	inv_n_bits = ~(x >>(p+1-n)) & ~(~0 << n);   // K&R n_bits, getbits(x,p,n) function and invterting those n bits
	l = (x & (~0 << p+1));     		    //Leftmost(first) bits of x above position p
	int m = (inv_n_bits << (p+1-n)); 	    //n inverted bits from position p shifted back to position p
	int r = (x & ~(~0 << (p+1-n))); 	    //rightmost(last) bits of x after n bits from position p
	return l|m|r;

 }

 int main(){

	int x, p, n;
	printf("x p, n\n");
	scanf("%d %d %d", &x, &p, &n);

	int res = invert(x,p,n);
	printf("%d\n", res);	
	
 	return 0;
 }
