#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�ü��������һ������Ȼ�����û����£��û�ÿ����һ�������͸������Ǵ��˻���С�ˣ�ֱ���û�����Ϊֹ�����Ҫ�����û������˶��ٴΡ�

int main()
{
	srand(time(0));
	int num = rand()%100 + 1;
	int input;
	int count;

	do {
		printf("Please enter a double digit number: ");
		scanf("%d", &input);
		count++;

		if (input > num) {
			printf("Too large, enter a smaller one!");
		}
		else if (input < num){
			printf("Too small, enter a larger one!");
		}
	} while (input != num);

	printf("You found it!");

}
