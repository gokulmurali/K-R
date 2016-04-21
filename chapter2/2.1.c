 /*Write a program to determine the ranges of char , short , int , and long variables, both signed and unsigned , by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.*/ 

 #include<stdio.h>
 #include<limits.h>
 #include<float.h>

 int main(){
	
	unsigned char c; 
	unsigned short s;
 	unsigned int i;
	unsigned long l;
	unsigned long long ll;

	float f;
	double d;
	long double ld;

	//FROM LIMITS header anf FLOAT header
	printf("\nUSING limits.h and float.h\n");
	printf("The number of bits in a byte %d\n", CHAR_BIT);

   	printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
   	printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
   	printf("The maximum value of UNSIGNED CHAR = %u\n", UCHAR_MAX);

   	printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
   	printf("The maximum value of SHORT INT = %d\n", SHRT_MAX); 
	printf("The maximum value of UNSIGNED SHORT INT = %u\n", USHRT_MAX);	

   	printf("The minimum value of INT = %d\n", INT_MIN);
   	printf("The maximum value of INT = %d\n", INT_MAX);
	printf("The maximum value of UNSIGNED INT = %u\n", UINT_MAX);

   	printf("The minimum value of LONG = %ld\n", LONG_MIN);
   	printf("The maximum value of LONG = %ld\n", LONG_MAX);
	printf("The maximum value of UNSIGNED LONG = %lu\n", ULONG_MAX);

	printf("The minimum value of SIGNED LONG LONG = %lld\n", LLONG_MIN);
	printf("The maximum value of SIGNED LONG LONG = %lld\n", LLONG_MAX);
	printf("The maximum value of UNSIGNED LONG LONG = %llu\n\nFLOATS\n", ULLONG_MAX);

	printf("The minimum value of float = %e\n", FLT_MIN);
	printf("The maximum value of float = %e\n", FLT_MAX);
        
	printf("The minimum value of double = %e\n", DBL_MIN);     //%f-full length, %e- exponent format
	printf("The maximum value of double = %e\n", DBL_MAX);
        
	printf("The minimum value of long double = %Le\n", LDBL_MIN); // Lf-full length, %Le- exponent format
	printf("The maximum value of long double = %Le\n", LDBL_MAX);
        


	// Calculating ranges using the idea of 2's complement representation
	/* Two's complement ranges from (-(2^N-1) to (2^N-1)-1) where most significant bit represents sign bit and N represents the number of bits 
	   for the given type */

	// For Char
	printf("\n\nUSING CALCULATION\n");
	c = ~0; // assigns the ones complement of 0, means flips 0, sets 1 for entire length of the number of bits i.e 11111111
	c = c >> 1; /* in two's complemnt represenation most signicant bit is sign bit, so one right shift gives the maximum value for signed type
		     i.e. 01111111 since MSB represnts sign bit*/	
	printf("The minimum value of SIGNED CHAR = %d\n", -c-1);
   	printf("The maximum value of SIGNED CHAR = %d\n", c);
   	printf("The maximum value of UNSIGNED CHAR = %u\n", (c*2)+1);


	// For short int
	s = ~0;   //same as for char
	s = s >> 1;
	printf("The minimum value of SHORT INT = %d\n", -s-1);
   	printf("The maximum value of SHORT INT = %d\n", s); 
	printf("The maximum value of UNSIGNED SHORT INT = %u\n", (s * 2) + 1);	

	//For INT
	i = ~0;
	i = i >> 1;
   	printf("The minimum value of INT = %d\n", -i-1);
   	printf("The maximum value of INT = %d\n", i);
	printf("The maximum value of UNSIGNED INT = %u\n", (i * 2) + 1);

	//For Long
	l = ~0;
	l = l >> 1;
   	printf("The minimum value of LONG = %ld\n", -l-1);
   	printf("The maximum value of LONG = %ld\n", l);
	printf("The maximum value of UNSIGNED LONG = %lu\n", (l * 2) +1);

	//For Long Long
	ll = ~0;
	ll = ll >> 1;
	printf("The minimum value of SIGNED LONG LONG = %lld\n", -ll-1);
	printf("The maximum value of SIGNED LONG LONG = %lld\n", ll);
	printf("The maximum value of UNSIGNED LONG LONG = %llu\n", (ll * 2) + 1);


 
	 

	return 0;
  	

 }
