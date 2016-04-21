 //Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.

 #include<stdio.h>

 int main(){

	float celsius, farh;

	for(farh = 300;farh >= 0;farh -= 20){
		celsius = (5.0 / 9.0) * (farh - 32);
		printf("%3.0f %6.2f\n", farh, celsius);
	}

	return 0;

 }
