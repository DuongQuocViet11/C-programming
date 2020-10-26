#include <stdio.h>
int main ()
{
	int capnhanvien, soluong;
	printf ("Nhap vao so luong cua ban:");
	scanf ("%d", &soluong);
	printf ("Chon cap nhan vien:\n1.Cap A\n2.Cap B\n3.Cap khac\n");
	scanf ("%d", &capnhanvien);
	if (capnhanvien == 1)
	{
	
	   printf ("Tien tro cap cua ban la: 300 ngan dong\n");
	   printf ("Luong thang cua ban la: %d", soluong + 300 );
    }
	else if (capnhanvien ==2)   
	{
	   printf ("Tien tro cap cua ban la: 250 ngan dong\n");
	   printf ("Luong thang cua ban la: %d", soluong + 250);
    }
	else 
	   printf ("Tien tro cap cua ban la: 100 ngan dong\n");
	   printf ("Luong thang cua ban la: %d", soluong + 100 );
	return 0;   
}  

