#include <stdio.h>
int main ()
{
	char tensv[5][30];
	int i,j;
	for (i=0; i<5; i++)
	{
		printf ("Nhap ten sinh vien[%d]:\n",i+1 );
		fflush(stdin);
		gets (tensv[i]);
	}
	
	for (i=0; i<5; i++)
	{
	  	printf("Danh sach sinh vien la:%s\n", tensv[i]);
	}


	
	
	
	return 0;
}
