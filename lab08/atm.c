#include <stdio.h>
int main ()
{
    int tienChuyen, stk;
	char ans, noiDung;
	int soThe, maPin , chucNang, tienRut, soDu =5000, soConlai;
    int count = 0, ok = 0;
    printf ("********Welcome To Viet's Bank********\n");
    printf ("Nhap vao so the:");
    scanf ("%d", &soThe);
        printf ("Nhap vao ma pin:");
        scanf ("%d", &maPin);  
        
        if (maPin !=1111)
        {   
		do
		{   
		    printf ("Nhap lai ma pin: ");
		    fflush (stdin);
		    scanf ("%d", &maPin);
            if(maPin==1111)
            {
			ok==0;
			printf ("Ma pin dung!");
		    
		}else 
		 count++;
		
		}while (count <=1 || ok!=0);
		{
			if (maPin!=1111)
		
		printf ("The cua ban da bi khoa. Vui long lien he ngan hang de biet them chi tiet!");
		}
        }else
	        {
			printf ("Ma pin dung\n");
		
	
		do 
		{
		printf ("Nhap vao chuc nang ban muon su dung:\n1. Rut tien\n2.Hien thi so du\n3.Chuyen khoan\n4.Ket thuc\n");
		scanf ("%d", &chucNang);
		
		switch(chucNang)
		 {
		case 1:
			 printf ("Nhap vao so tien can rut: ");
	              scanf ("%d", &tienRut);
	                 if (tienRut%50== 0 && tienRut < soDu)
	                {
	    	             soConlai = soDu - tienRut;
			             printf ("So du sau khi rut la: %d", soConlai);
		            }
		            else 
		            {
			             printf ("So tien rut phai la boi cua 50 va nho hon 5 trieu");
		            } 
		            printf ("\nBan co muon thuc hien giao dich khac khong?(Y/N): ");
		            fflush (stdin);
					scanf ("%c", &ans);
					printf ("Ans = %c\n", ans);
					break;
		case 2:
		     printf ("So du cua ban la: %d", soDu);	
			 printf ("\nBan co muon thuc hien giao dich khac khong?(Y/N): ");
			 fflush (stdin);
					scanf ("%c", &ans);
					printf ("Ans = %c\n", ans);
					break;
		case 3:
		     printf ("Nhap so tai khoan chuyen toi: ");
		     scanf ("%d", &stk);
		     printf ("Nhap so tien chuyen di: ");
		     scanf ("%d", &tienChuyen);
		    if(tienChuyen < 5000) 
		     {
		     	 printf ("Nhap noi dung chuyen khoan: ");
		         fflush (stdin);
			     scanf ("%c", &noiDung);
				 soConlai = soDu - tienChuyen;
				 printf ("So du con lai cua ban la: %d\n", soConlai);
			     printf ("Ban chuyen khoan thanh cong den tai khoan %d voi noi dung %c\n", stk, noiDung);
			 }
			 else
			 {
			     printf ("Tai khoan cua ban khong du de thuc hien giao dich");
		     }
			 printf ("\nBan co muon thuc hien giao dich khac khong?(Y/N): ");
			 fflush (stdin);
					scanf ("%c", &ans);
					printf ("Ans = %c\n", ans);   
					break;
		case 4:
		    printf ("");	 					            
	     }
		}while(ans == 'Y');
		printf ("Cam on ban da su dung dich vu.");}
	return 0;
}
