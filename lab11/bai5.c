#include <stdio.h>
void main ()
{
		menu();
		int tong, hieu, tich, thuong;
		int x, y;
				printf ("Nhap vao x: ");
	         	scanf ("%d", &x);
	         	printf ("Nhap vao y:");
	         	scanf ("%d", &y);
			    
			
		int chucNang;
			printf ("Chon chuc nang ban muon: ");
	        scanf ("%d", &chucNang);
			switch (chucNang)
	    {
	    
			case 1:
			{
				tong =  sum (x, y);
				break;
			}
			case 2: 
			{
			   hieu =  sub (x, y);
				break;
			}
			case 3:   
			{
				tich =  multi (x, y);
				break;
			}  		
			case 4:
			{
				 thuong =  div (x, y);
				break;
			}
			case 5: 
			{
				printf ("Chuong trinh ket thuc");
				break;
		   }
			default:
			{
				printf ("Khong hop le!");
			}
		}
	}
	menu()
	{
	    printf ("===============");
		printf ("\nMENU");
		printf ("\n1.Tinh tong\n2.Tinh hieu\n3.Tinh tich\n4.Tinh thuong\n5.Thoat\n");
		printf ("===============\n");
	}
	int sum (int num1, int num2)
	{
		int sum;
		sum = num1 + num2;
		printf ("Tong la: %d", sum);
		return (sum);
	}
	int sub (int num1, int num2)
	{
		int sub;
		sub = num1 - num2;
		printf ("Hieu la: %d", sub);
		return (sub);
	}
	int multi (int num1, int num2)
	{
		int multi;
		multi = num1 * num2;
		printf ("Tich la: %d", multi);
		return (multi);
	}
	int div (int num1, int num2)
	{
		int div;
		if (num2 != 0)
		{
			div = num1 / num2;
			printf ("Tong la: %d", div);
			return (div);
		}
		else 
		    {
			 printf ("Khong hop le!!");
		    }
	}
