#include <stdio.h>
#include <stdlib.h>

int TimesPrinted = 0;
int a = 1;

int main()
{
	while (a > 0)
	{
		system("cls");
		printf("Hello World! \n \n");
		printf("You have printed the phrase %d", TimesPrinted, "%d Times");
		/* the TimesPrinted variable breaks without the extra "%d Times" on the end, but it won't show in code */
		printf(" times.");
		printf("\n");
		printf("Press 1 to print again, or 0 to leave \n");
		scanf_s("%d", &a);
		TimesPrinted++;
	}
	system("cls");
	printf("Goodbye!");
	return 0;
}
