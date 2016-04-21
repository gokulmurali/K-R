 /*Write the function any(s1,s2) , which returns the first location in the string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2 . (The standard library function strpbrk does the same job but returns a pointer to the location.)*/

 #include<stdio.h>
 #include<stdlib.h>
 #define LEN 1024

  //O(n^2) solution	
 /*int any(char * s1, char * s2){
 
 	int i,j;
	
	for(i=0; s2[i] != '\n'; i++){
		for(j=0; s1[j] != '\n'; j++)
			if(s1[j] == s2[i])
				return j;
 	}
	return -1;
 }*/

 //AN optimised O(n+m) solution to the problem 
 int any_optimised(char * s1, char * s2){
 
 	int i, j, index = LEN + 1;
	//int * count = (int *) calloc(sizeof(int), 256);
	int count[256];
		
	//count array initialised to zero
	for(i=0; i<256; i++)
		count[i] =0;

	//For any character in s2, count of that character is given character count of that character in s2
	for(i=0,j=1; s2[i] != '\n'; i++){
		if(!count[s2[i]]){
			count[s2[i]] = j++;
		}	
	}
	
	//If any of the character in s2 in present in s1 as denoted by the count array, smallest index of the all character is returned
	for(i=0; s1[i] != '\n'; i++){
		if(count[s1[i]]){
			if(index > i)
				index = i;
		}
	}
	if(index == LEN + 1)
		return -1;
	else
		return index;
		
 }	

 int main(){
 	
	int index;
	char s1[LEN], s2[LEN];
	fgets(s1, sizeof(s1), stdin);
	fgets(s2, sizeof(s2), stdin);
	
	//index = any(s1, s2);
	index = any_optimised(s1, s2);
	printf("index = %d\n",index);

	return 0;
 }
