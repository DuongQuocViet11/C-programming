#include <stdio.h>
int main ()
{
	int a, b;
	printf ("Nhap so a: ");
	scanf ("%d", &a);
	printf ("Nhap so b: ");
	scanf ("%d", &b);
	printf ("Hieu 2 so la: %d", a-b);
	if (a-b==a || a-b==b)
	   printf ("\nHieu bang gia tri da duoc nhap");
	else 
	   printf ("\nHieu khong bang bat cu gia tri nao da duoc nhap");
	
	
	return 0;
}
