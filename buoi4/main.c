#include <stdio.h>
int main ()
{
	int sodu = 200; 
	int num;
	int tienphi = 5;
	printf ("So du cua ban la: %d", sodu);
	printf ("\nSo tien ban can rut la:");
	scanf ("%d", &num); 
	if (num%50==0 && num <= 100 )
	{
        char ans = 'y' ;
		printf ("Giao dich nay mat phi, ban co muon rut khong (y or n): ");
	    fflush(stdin);
		scanf ("%c", &ans);
		if (ans =='y')
		{
		   printf ("So du con lai la: %d", sodu - num - tienphi);
	    }
		else
		   printf ("Giao dich ket thuc");
    }
    else 
       printf ("Ban can rut so tien la boi cua 50 va nho hon 100 trieu."); 
	return 0;
}

