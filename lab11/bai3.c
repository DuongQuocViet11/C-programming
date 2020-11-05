#include <stdio.h>
void main ()
{
  float soThuc[5];
  int i;
  for (i=0; i<5; i++)
  {
  	printf ("Nhap vao so thuc[%d]:", i+1);
  	fflush(stdin);
	  scanf ("%f", &soThuc[i]);
  }
  for (i=0; i<5;i++)
  {
  	printf ("Mang nhap vao la: %f\n", soThuc[i]);
  }
   reverse(soThuc);
}
void reverse (float soThuc[])
{
	int i;
	for (i=4; i>=0 ; i--)
	{
		printf ("Mang dao nguoc la: %f\n", soThuc[i]);
	}
}
