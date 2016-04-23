 /*Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.*/

 #include<stdio.h>
 #include<limits.h>
 //#define TYPE_SIZE (X) = ((sizeof(X)* CHAR_BIT) -1)

 int setbits(int x, int p, int n, int y){
	//int size = sizeof(x) * CHAR_BIT - 1; //TYPE_SIZE suppose signed int is 4 bytes long, this returns 31 bits, avoiding one sign bit
	int l = 0, n_bits = 0;
	//printf("%d\n",size);
	n_bits = (x >>(p+1-n)) & ~(~0 << n);    // K&R n_bits, getbits(x,p,n) function
	l = (x & (~0 << y+1));     		//Leftmost(first) bits of x above position y
	int m = (n_bits << (y+1-n)); 		//n bits from position p shifted to position y
	int r = (x & ~(~0 << (y+1-n))); 	//rightmost(last) bits of x after n bits from position y
	//printf("%d\t%d\t%d\t%d \n",l,m,r,l|m|r);
	 return l|m|r;

 }

 int main(){

	int x, p, n, y;
	printf("x p, n, y\n");
	scanf("%d %d %d %d", &x, &p, &n, &y);

	int res = setbits(x,p,n,y);
	printf("%d\n", res);	
	
 	return 0;
 }
