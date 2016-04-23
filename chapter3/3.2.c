 /*Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s . Use a switch . Write a function for the other direction as well, converting escape sequences into the real characters.*/

 #include<stdio.h>
 #define MAX_LEN 1024


 /* Replaces escape sequences '\t' and '\n, by charatcters '\T' and '\N' , using switch. */
 void escape(char * s, char * t) {
 
	int i, j;
 
	for(i = 0, j = 0; t[i] != '\0' ; i++) {
		switch(t[i]) {
			case '\t': s[j++] = '\\';
				   s[j++] = 'T';
				   break;
			case '\n': s[j++] = '\\';
				   s[j++] = 'N';
				   break;
			default: s[j++] = t[i];
				 break;				 
		}
	}
	s[j] = '\0';
	puts(s);
 }

 /*Converts those characters '\T' and '\N' by escape sequences.*/
 void inv_escape(char * s, char * t) {
 
	int i, j;
 
	for(i = 0, j = 0; t[i] !='\0' ; i++) {
		switch(t[i]) {
			case '\\': switch(t[++i]) {
					case 'T': s[j++] = '\t';
				   		  break;
					case 'N': s[j++] = '\n';
				   	 	   break;
					default: s[j++] = t[i];
						 break;
				  }
				  break;
			default: s[j++] = t[i];
				 break;				 
		}
	}
	s[j] = '\0';
	puts(s);
 }

 int main() {

 	char s[MAX_LEN], t[MAX_LEN];
	int i;
	FILE *fp = fopen("sample_text.txt", "r");

	fgets(t, sizeof(s), fp);
	//puts(s);

	escape(s, t);
	inv_escape(t, s);

	return 0;
 }
