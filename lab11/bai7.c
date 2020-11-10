#include <stdio.h>
void main()
{
    int tuoi;
	int chieuCao, canNang;
	printf ("Nhap vao nhung tieu chuan cua ban sau day:");
	printf ("\nChieu cao:");
	scanf ("%d", &chieuCao);
	printf ("Can nang:");
	scanf ("%d", &canNang);
	printf ("So tuoi:");
	scanf ("%d", &tuoi);
	Check(tuoi);
   
}
int Check(tuoi)
{   
   	if (tuoi == 20)
    {
         printf ("Dat tieu chuan ");	
         Say(); 
    }
         
         
    else
    {
		 printf ("Khong dat tieu chuan\n");
         printf ("Goodbye bro!!!");
	
    }
    
}
int Say()
{
	char ans;
	printf ("\nLam nguoi yeu anh nhe(Y/N)");
	fflush (stdin);
	scanf ("%c", &ans);
	if (ans=='Y')
	{
		Love();
	}
	else 
	{
		Break();
	}
}
void Break()
{
	printf ("Chan!!!");
}
void Love()
{
	printf ("I love U 3000 <3");
}
