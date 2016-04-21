 /*Write a program entab that replaces strings of blanks with the minimum number of tabs and blanks to achieve the same spacing. Use the same stops as for detab . When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?*/

 #include<stdio.h>
 #define TAB 4
 
 void entab(int space_count){
 	
 	int i, n_tab, n_space;
	n_tab = space_count / TAB;
	n_space = space_count % TAB;
	for(i=0; i<n_tab; i++)
		putchar('\t');
	for(i=0; i<n_space; i++)
		putchar(' ');
	 		
 }

 int main(){
	
	int i, count=0;
	char c;
	FILE *fp = fopen("sample_text.txt", "r");

	while((c = fgetc(fp)) != EOF){
		if(c == '\n'){
			count = 0;
			putchar('\n');
		}
		else if(c == ' ')
			count++;
		else{
			if(count)
				entab(count);
			count = 0;
			putchar(c); 
		}
	}	

	return 0;
 }
