#include <stdio.h>
#include <math.h>
int main ()
{
	int a, b, c;
	printf ("Nhap vao canh thu 1 cua tam giac: ");
	scanf ("%d", &a);
	printf ("Nhap vao canh thu 2 cua tam giac: ");
	scanf ("%d", &b);
	printf ("Nhap vao canh thu 3 cua tam giac: ");
	scanf ("%d", &c);
    GetArea(a,b,c);
}
void GetArea(int a, int b, int c)
{
	float  S;
    if ((a + b) > c && (a+c)>b && (b+c)>a )
    {
    	printf ("Day la tam giac\n");
    	S= sqrt ((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
	    printf ("Dien tich tam giac la: S= %f", S);
	}
    else 
      printf ("Day khong phai tam giac");
	
    
   
}
