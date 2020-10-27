#include <stdio.h>
int main ()
{
	int x, y;
	printf ("Nhap vao so x: ");
	scanf ("%d", &x);
	printf ("Nhap vao so y: ");
	scanf ("%d", &y);
	if (x<=2000 || x>=3000)
	
	   printf ("So x la: %d", x);
	
	if (y >= 100 || y <= 500)
	   printf ("\nso y la: %d", y);
    
	else 
	   printf ("Error");   
    return 0;
	
	
}
