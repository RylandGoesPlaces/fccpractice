#include <stdio.h>

//求平均数，用户不停输入正整数，直至输入到-1停止，计算机计算出平均数

int main()
{
	int number;
	int sum = 0;
	int count = 0;

	scanf("%d", &number);
	while ( number != -1)
	{
		sum += number;
		count++;
		scanf("%d", &number);
	}

	printf("%f\n", 1.0 * sum / count);

}
