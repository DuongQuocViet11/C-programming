#include <stdio.h>
float chuvi(float a, float b);
float dientich(float a, float b);
void main ()
{
		float S, C;
		int chucNang;
		float chieuDai, chieuRong;
		printf ("Nhap chieu dai:");
		scanf ("%f", &chieuDai);
		printf ("Nhap chieu rong:");
		scanf ("%f", &chieuRong);
		printf ("=============\n");
		printf ("MENU\n");
		printf ("1.Tinh chu vi hinh chu nhat\n2.Tinh dien tich hinh chu nhat\n3.Ket thuc\n");
		printf ("=============\n");
		printf ("Nhap chuc nang:");
		scanf ("%d", &chucNang);
		switch (chucNang)
		{
			case 1:
				{
					C = chuvi (chieuDai, chieuRong);
					break;
				}
			case 2:
			    {
			    	S = dientich (chieuDai, chieuRong);
			    	break;
				}
			case 3:
			    {
			    	printf ("Chuong trinh ket thuc");
				}	
			default:
			    printf ("Lua chon khong hop le");	
		}


}
	float chuvi(float a, float b)
	{
		float chuvi;
		chuvi = (a+b) * 2;
		printf ("Chu vi la: %f", chuvi);
	}
	float dientich (float a, float b)
	{
		float dientich;
		dientich = a * b;
		printf ("Dien tich la: %f", dientich);
	}
