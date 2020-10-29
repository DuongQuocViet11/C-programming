#include <stdio.h>
int main ()
{
	int i, j, k;
	i = 0;
	printf ("Nhap vao 1 so: ");
	scanf ("%d", &i);
    for (j = 0 ; j<i; j++)
	{
	    printf ("\n");
		   for (k=0; k <= j; k++)
		        printf ("%d", k+1); 
	}
	return 0;
}
