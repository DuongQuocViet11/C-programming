#include <stdio.h>
int main ()
{
	int a, b;
	printf ("Nhap so a: ");
	scanf ("%d", &a);
	printf ("Nhap so b: ");
	scanf ("%d", &b);
	if (a*b > 1000)
	   printf ("Tich a nhan b lon hon 1000");
	else if (a*b == 1000)
	   printf ("Tich a nhan b bang 1000");
	else 
	   printf ("Tich a nhan b be hon 1000");   
	return 0;
}
