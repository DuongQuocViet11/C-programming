#include <stdio.h>
int main ()
{
	int x, y;
	printf ("Nhap vao so x: ");
	scanf ("%d", &x);
	printf ("Nhap vao so y: ");
	scanf ("%d", &y);
	if ((x<2000 && x>3000) && (y>100 && y<500))
	{
	
	   printf ("So x la: %d", x);
	   printf ("So y la: %d", y);
    }
	else 
	   printf ("Error");   
    return 0;
	
	
}
