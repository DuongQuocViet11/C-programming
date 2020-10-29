#include <stdio.h>
int main ()
{
	int i, n;
	int num1=1, num2 =1, sum;
    printf ("Nhap vao so cac chu so muon in ra:");
	scanf ("%d", &n);
	printf ("Chuoi Fibonaci la: ");
	for (i=1; i<=n; i++)
	{
		printf ("%d ", num1 );
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	
	
	
	return 0;
}
