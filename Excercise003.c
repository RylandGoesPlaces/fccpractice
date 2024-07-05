#include <stdio.h>

//ÇóºÍ£¬1-1/2+1/3-1/4...1/n 

int main()
{
	int i;
	int n;
	double sum = 0.0;
	double sign = 1.0;
	
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		sum += sign/i;
		sign = -sign;
	};
	
	printf("Sum = %f\n", sum);
 } 
