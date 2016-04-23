 /*Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside). Write a version with only one test inside the loop and measure the difference in run-time.*/

 #include<stdio.h>

 /* Since binary search progresses over a sorted array a third checking condition by replacing if(x < v[mid]) with if(x <= v[mid]) and making appropriate changes in low and mid assignment that follows.*/
 int binsearch(int x, int v[], int n){
 
	int low, mid, high;
	
	low = 0;
	high = n-1;
	while(low < high){
		mid = (low + high) / 2;
		if(x <= v[mid])
			high = mid;
		else
			low = mid + 1;
	}
	
	return v[low]==x ? low : -1;
 }

 int main(){

 	int v[100], i, index, x, n;
	printf("Size of array:\n");
	scanf("%d", &n);
	printf("Array:\n");
	for(i = 0; i < n; i++)
		scanf("%d", &v[i]);
	printf("x:");
	scanf("%d", &x);
	index = binsearch(x, v, n);
	printf("Index = %d\n", index);

	return 0; 

 }
