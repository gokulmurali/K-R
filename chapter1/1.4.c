 //Write a program to print the corresponding Celsius to Fahrenheit table.
 #include<stdio.h>

 int main(){

	float celsius, farh;
	int lower=0, upper=300, step=20;

	celsius=0;
	while(celsius <= upper){
		farh = (9.0 / 5.0)*celsius + 32;
		printf("%3.0f %6.2f\n", celsius, farh);
		celsius += step;
	
	}

	return 0;

 }
