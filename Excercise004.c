#include <stdio.h>

//将输入的数排开，12345 -> 1 2 3 4 5
 

int main()
{
	printf("请输入一个正整数：");
    int x;
	scanf("%d", &x);
//	int x = 56789;
	
//	56789 / 10000 -> 5
//	10000 / 10 -> 1000
//	56789 % 1000 -> 6789
//	6789 / 1000 -> 6
//	1000 / 10 -> 100
//	6789 % 100 -> 789
//	789 / 100 -> 7
	int t = x;
	int mask = 1;
	while(t>9){
		t /= 10;
		mask *= 10;
	}
	do{
		int d = x / mask;
		printf("%d", d);
		if( mask >9 ){
			printf(" ");
		}
		x %= mask;
		mask /= 10;
		
	}while (mask > 0);
	
	printf("\n");
		
	
}
