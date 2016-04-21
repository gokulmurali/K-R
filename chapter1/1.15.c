 //Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

 #include<stdio.h>
 #define LOWER 0
 #define UPPER 300

 float celsius(float fahr){

 	return (5.0 / 9.0) * (fahr - 32);

 }

 int main(){

	float fahr;
	int i;

	for(fahr = LOWER; fahr <= UPPER; fahr += 20)
		printf("%3.0f\t %6.2f\n", fahr, celsius(fahr));
	
	return 0;
 }
