 /*Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by n bit positions.*/

 #include<stdio.h>
 #include<limits.h>

 int rightrot(int x, int n){
	int l = 0, n_bits = 0;
	int size = sizeof(x) * CHAR_BIT - 1; 	//calculates the size in number of bits of given type
	n_bits = (x >>(n+1-n)) & ~(~0 << n);    //K&R n_bits, getbits(x,p,n) function, get n bits from position n
	l = n_bits<<size-n;    			//Shift the rightmost n bits of x to leftmost(MSB) part so that circular shift is done
	//printf("%d\t%d\n",l,x>>n);	 
	return l|(x>>n);

 }

 int main(){

	int x, p, n;
	printf("x n\n");
	scanf("%d %d", &x, &n);

	int res = rightrot(x, n);
	printf("%d\n", res);	
	
 	return 0;
 }
