#include <stdio.h>
int main ()
{
	int intArr[5];
	float floatArr[10];
	int i;
	for (i=0; i<5; i++)
	{
		printf ("Nhap vao 1 so:[%d]\n", i);
		scanf ("%d", &intArr[i]);
		floatArr[i]= intArr[i];
		printf ("So sau khi gan la: %f\n", floatArr[i]);
	}
	for (i=5; i<10; i++)
	{
	   printf ("Nhap vao 1 so:[%d]\n", i);
		scanf ("%d", &floatArr[i]);
		floatArr[i]= 0;
		printf ("So sau khi gan la: %f\n", floatArr[i]);	
	}
	return 0;
}
