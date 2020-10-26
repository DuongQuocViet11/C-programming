#include <stdio.h>
int main ()
{
	int sodiem;
	printf ("Nhap vao so diem cua ban: ");
	scanf ("%d", &sodiem);
	if (sodiem >= 75)
	{
		printf ("Ban la sinh vien loai A");
	}
	else if (sodiem >= 60 && sodiem <75)
	{
		printf ("Ban la sinh vien loai B");
	}
	else if (sodiem >=45 && sodiem <60)
	{
		printf ("Ban la sinh vien loai C");
	}
	else if (sodiem >= 35 && sodiem <45)
	{
		printf ("Ban la sinh vien loai D");
	}
	else 
	    printf ("Ban la sinh vien loai E");
	    
	return 0;
	
	
}
