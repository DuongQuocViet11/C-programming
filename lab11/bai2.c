#include <stdio.h>
int main ()
{
  int nguyen[5];
  int i, num;
  for (i = 0; i < 5; i++ )
  {
     printf ("Nhap vao 1 so nguyen[%d]:", i+1);	
     scanf ("%d", &nguyen[i]);
     
  }	
  for (i=0; i<5; i++)
  {
  printf ("Mang nhap vao la %d\n", nguyen[i]);
  printf ("Kiem tra %d\n",  check (nguyen[i]));
  }
}

int check (int num)
{
   
	if (num %50==0)
	{
		printf ("Day la boi so cua 50\n");
		return (0);
	}
	else
	    printf ("Day khong la boi so cua 50\n");
	    return (1);
}

