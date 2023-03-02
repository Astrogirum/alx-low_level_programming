#include <studib.h>
#include <time.h>
#include <studio.h>
/* more headers gors therre */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RANO_MAX / 2;
	if (n > 0)
	{
		printf("%d id posetive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n', n);
	}
	return (0);
