 /*Write an alternate version of squeeze(s1,s2) that deletes each character in the string s1 that matches any character in the string s2 */


 #include<stdio.h>
 #define LEN 1024

 /*
 void squeeze(char *s, char c){
 	int i,j;
 	for(i = j = 0; s[i] != '\n'; i++)
		if(s[i] != c)
			s[j++] = s[i];
	s[j] = '\n';
	s[j++] = '\0';
 }

 //Using the idea of removing a char from a string given in K&R
 void squeeze1(char * s1, char * s2){
 
 	int i, j, k;
	for(i=0; s2[i] != '\n'; i++)
		for(j=0; s1[j]!= '\n'; j++)
			if(s1[j] == s2[i])
				s1[j] = '0';        //if any character in s2 is present in s1, then that character is replaced with '0' in s1 
	squeeze(s1, '0');			//squeeze(s1, '0') deletes all '0' from s1
	puts(s1);
 }*/

 //Another soltion using the same idea which removes a given in a string for every char in second string 
 void squeeze1(char *s1, char *s2){
 	int i, j, k;
	for (i = 0; s2[i] != '\n'; i++){
        	for (j = k = 0; s1[j] != '\n'; j++)
        	    if (s1[j] != s2[i])
        	        s1[k++] = s1[j];
		s1[k] = '\n';
		s1[k++] = '\0';        
    	}	
    	puts(s1);	
 }

 int main(){
 	char s1[LEN], s2[LEN];
	fgets(s1, sizeof(s1), stdin);
	fgets(s2, sizeof(s2), stdin);
	squeeze1(s1, s2);

	return 0;
 }
