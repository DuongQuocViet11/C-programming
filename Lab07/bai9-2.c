#include <stdio.h>
int main ()
{
	int num1, num2, i;
	int sum = 0;
	printf ("Nhap so num1: ");
	scanf ("%d", &num1);
	printf ("Nhao so num2: ");
	scanf ("%d", &num2);
	do
	{
		  if (i%2 !=0)
	        sum +=i;
			++i;	  
	}while (i<num2);
	printf ("Tong cac so le nam giua %d va %d la: %d", num1, num2, sum);
	return 0;

}
