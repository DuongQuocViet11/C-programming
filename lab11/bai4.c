#include <stdio.h>
int indexMin()
{
	int min;
	int nguyen[10];
	int i;
	for (i=0; i<10; i++)
	{
		printf ("Nhap vao so nguyen [%d]:", i+1);
	    scanf ("%d", &nguyen[i]);
	}
	for (i=0; i<10; i++)
	{
		printf ("Mang da nhap la[%d]:%d\n",i+1, nguyen[i]);
	}
	min = nguyen[0];
	for (i=0; i<10; i++)
	{
		if(nguyen[i]<min)
		{
			min = nguyen[i];
		}
	}
		printf ("Gia tri nho nhat la:%d", min);
}
int main()
{
	indexMin();
}
