 /*Write the function htoi(s) , which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F .*/
 

 #include<stdio.h>
 //#include<math.h> // gcc filename.c -lm for compliation
 #include<stdlib.h>
	
 #define MAX_LEN sizeof(long long int)
 
 /* Implementation using math.h with regular decimal conversion from hexa decimal using powers of 16
 long long int htoi(char * buff){
 	int i, len,j, k;
	long long int number=0;
	for(len=0; buff[len] != '\0'; ++len);

	for(i=len-1,j=0; i>=0; i--,j++)
	{
		if(buff[i] == 'x' || buff[i] == 'X')
			return number;
		if(buff[i] >= '0' && buff[i] <= '9'){
			number = number + ((buff[i] - '0') * pow(16,j);) ;

		}
		else if((buff[i] >= 'a' && buff[i] <= 'f'))
			number = number + ((buff[i] - 'a') + 10) * pow(16, j); 
		else if(buff[i] >= 'A' && buff[i] <= 'F')
			number = number + ((buff[i] - 'A') + 10) * pow(16, j);
		else{
			printf("%lld\n", number);
			printf("Invalid Hexa-Decimal Number\n");
			exit(1);
		}
 	}
	return number;
 	
 }
 */

 //Using regular calculation withh 16 as base(multiplying 16 for a place value)
 long long int htoi(char * buff){
 	int i=0, len,j;
	long long int number=0;
	for(len=0; buff[len] != '\n'; ++len);          //fgets() saves '\n' before appending '\0' so check upto '\n'
	//printf("%d\n", len);
 	
	if(buff[0]=='0' && (buff[1] == 'x' || buff[1] == 'X')) 
		i+=2;
	for(j=i; j<len; j++){
		if(buff[j] >= '0' && buff[j] <= '9')
			number = 16 * number + (buff[j] - '0');
		else if((buff[j] >= 'a' && buff[j] <= 'f'))
			number = 16 * number + ((buff[j] - 'a') + 10); 
		else if(buff[j] >= 'A' && buff[j] <= 'F')
			number = 16 * number + ((buff[j] - 'A') + 10);
		else{
			printf("Invalid Hexa-Decimal Number\n");
			exit(1);
		}
 	}
	return number;
 	
 }
  

 int main(){

	long long int number;
	char buff[MAX_LEN];
	fgets(buff, sizeof(buff), stdin);

  	number = htoi(buff);
	printf("\nInteger is: %lld\n", number);
 	return 0;
 }
