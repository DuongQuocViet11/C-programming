#include <stdio.h>
int main ()
{
	char name[150];
	int tuoi;
	printf ("Nhap vao ten cua ban:");
	gets (name);
	printf ("Nhap vao so tuoi cua ban: ");
	scanf ("%d", &tuoi);
	int i = tuoi;
	for (i = 0; i < tuoi; i++)
	{
		printf ("Hello %s\n", name);
	}
	
	return 0;
}
