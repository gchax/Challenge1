#include<stdio.h> 
#include<math.h>

int main() 
{
	int n = 0, s{}, f{};
	double sum = 0, avg{}, sd{}, power{};
	scanf_s("%d %d", &s, &f);

	if (s < f) 
	{
		for (int i = s;i <= f;i++) 
		{
			printf("%d ", i);
			n += 1;
			sum += i;
			power += i * i;
		}
		avg = sum / n;
		printf("\nAverage = %.1lf", avg);

		sd = sqrt(((n * power) - (sum * sum)) / (n * (n - 1)));
		printf("\nSD = %.2lf", sd);
	}
	else if (s > f) 
	{
		for (int i = s;i >= f;i--) 
		{
			printf("%d ", i);
			sum += i;
			n += 1;
			power += i * i;
		}
		avg = sum / n;
		printf("\nAverage = %.1lf", avg);

		sd = sqrt(((n * power) - (sum * sum)) / (n * (n - 1)));
		printf("\nSD = %.2lf", sd);
	}
	else {
		printf("%d ", s);
		printf("\nAverage = %d", s);
		printf("\nSD = %d", s);
	}
	return 0;
}