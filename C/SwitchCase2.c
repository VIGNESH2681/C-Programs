
#include <stdio.h>

int main()
{

	int a,b;
printf("Enter a and b: ");
scanf("%d%d",&a,&b);

	switch (a+b) {
		case 1:
			printf("Case 1 is Matched.");
			break;

		case 2:
			printf("Case 2 is Matched.");
			break;

		case 3:
			printf("Case 3 is Matched.");
			break;

		default:
			printf("Default case is Matched.");
			break;
	}

	return 0;
}
