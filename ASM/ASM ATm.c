#include <stdio.h>
int Login (int username, int password);
int Withdraw (int num);
int Transfer (int id, int num);
int Check(int soDu);
int main ()
{
	int username, num, soDu = 5000;
	int password, id;
	int chucNang;
	char ans;
    printf ("Welcome to Viet's Bank\n");
    printf ("Kiem tra: %d\n", Login(username, password));
    do 
    {
	  printf ("1.Login\n2.Rut tien\n3.Chuyen khoan\n4.Kiem tra so du");
	  printf ("\nChon chuc nang:");
	  scanf ("%d", &chucNang);
      switch (chucNang)
      {
    	case 1:
    		{
    			printf ("Kiem tra: %d\n", Login(username, password));
    			printf ("\nBan co muon thuc hien giao dich khac khong?(Y/N): ");
			    fflush (stdin);
				scanf ("%c", &ans);
				printf ("Ans = %c\n", ans);	
				break;
			}
		case 2:
    		{
    			
				Withdraw (num);
    		    printf ("\nBan co muon thuc hien giao dich khac khong?(Y/N): ");
			    fflush (stdin);
				scanf ("%c", &ans);
				printf ("Ans = %c\n", ans);	
				break;
			}
		case 3:
			{
				Transfer (id, num);
				printf ("\nBan co muon thuc hien giao dich khac khong?(Y/N): ");
			    fflush (stdin);
				scanf ("%c", &ans);
				printf ("Ans = %c\n", ans);	
				break;
			}
		case 4:
		    {
			    Check (soDu);
			    printf ("\nBan co muon thuc hien giao dich khac khong?(Y/N): ");
			    fflush (stdin);
				scanf ("%c", &ans);
				printf ("Ans = %c\n", ans);	
				break;
			}
			   
	   }
	 }while (ans == 'Y');
	    printf ("Cam on ban da su dung dich vu");
   
	   return 0;
}

int Login (int username, int password)
{
   	printf ("Nhap vao ten dang nhap: ");
	scanf ("%d", &username);
	printf ("Nhap vao mat khau: ");
	scanf ("%d", &password);
   if (password == 1111 && username == 1234)
   {
      printf ("Dang nhap thanh cong!\n");
      return (1);
   }
   else 
   {
      printf ("Dang nhap that bai!\n");
      return (0);
   }
}
int Withdraw (int num)
{
    int soDu = 5000;
	printf ("Nhap vao so tien rut:");
	scanf ("%d", &num);
	if (num <= soDu && num %50 == 0)
	{
		printf ("Rut tien thanh cong.\n");
		printf ("So du con lai cua ban la: %d", soDu - num);
	}
	else 
	{
		printf ("Rut tien that bai.\n");
		printf ("So tien ban rut phai nho hon so du va la boi cua 50");
	}
	
}
int Transfer (int id, int num)
{
	int soDu = 5000;
	printf ("Nhap vao so tai khoan chuyen den:");
	scanf ("%d", &id);
	printf ("Nhap so tien can chuyen:");
	scanf ("%d", &num);
	if (num <= soDu && num %50==0)
	{
		printf ("Da chuyen thanh cong toi tai khoan %d\n", id);
		printf ("So du con lai cua ban la: %d", soDu - num);
	}
	else 
	{
		printf ("Chuyen khoan khong thanh cong.\n");
		printf ("So tien chuyen phai nho hon so du va la boi so cua 50");
	}
}
int Check(int soDu)
{
    soDu = 5000;
	printf ("So du cua ban la:%d", soDu);
}


