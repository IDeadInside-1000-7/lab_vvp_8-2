#include <stdio.h>
#include <math.h>
int main()
{
	int A, B, rez;
	printf("Enter A and B (A > B):\n");
	printf("A = ");
	scanf("%i", &A);
	printf("B = ");
	scanf("%i", &B);
	if (A < B)
		printf("Please, enter (A > B)!");
	else
		rez = A / B;
	printf("Result is: ");
		printf("%i", rez);


	
	
}
