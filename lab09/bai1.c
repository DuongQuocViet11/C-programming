
#include <stdio.h>
int main ()
{
	int Arr[10];
	int i;
	for (i=1; i<10; i+=2)
	{
        printf ("Nhap vao so:\n");
	    scanf ("%d", &Arr[i]);
	}
	printf ("Mang da nhap:\n");
	for (i=1; i<10; i+=2)
	printf ("%d\t", Arr[i]);
    return 0;
}
