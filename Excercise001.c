#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//让计算机来想一个数，然后让用户来猜，用户每输入一个数，就告诉它是大了还是小了，直到用户猜中为止，最后还要告诉用户它猜了多少次。

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
