#include <stdio.h>
main ()
{
	incre();
	incre();
	incre();
}
incre()
{
	static char var = 65;
	printf ("\nThe character stored in var is %c", var++);
}
