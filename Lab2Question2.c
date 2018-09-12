#include <stdio.h>

int accum;
int addTheNums();

int main()
{
	int x, y;

	printf("Please enter the numbers you would like added together separated by a comma: ");
	scanf("%d, %d", &x, &y);

	accum = addTheNums(&x, &y);

	printf("The number after addition is: %d", accum);
	return 0;

}

int addTheNums(int a, int b)
{
	int sum = a+b;
	return sum;
}
