#include <stdio.h>
int main ()
{
    int n;
	int i;
	printf ("Ban muon bang cuu chuong so may: ");
	scanf ("%d", &n);
	for (i = 1;i <= 10; i++)
	  printf ("%d * %d = %d\n", n, i, n*i);	
	return 0;  
}
