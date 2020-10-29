#include <stdio.h>
int main ()
{
	int i, j, k;
	i = 5;
	
    for (j = 0 ; j<i; j++)
	{
	    printf ("\n");
		   for (k=0; k <= j; k++)
		        printf ("%d", k+1); 
		        
	}
    printf ("\n\n");
	for (j=i; j>=1; j--)
	{
		for (k=1; k<=j;k++)
	       
		   printf ("%d", k);
	       printf ("\n");
	}
	return 0;
}
