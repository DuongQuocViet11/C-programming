#include <stdio.h>
#include <stdbool.h>
main()
{
	menu();
    int key, ch;
	int a , b;
	bool Dn = false;
	while (true){
	menu (&ch);
	switch (ch)
	{
		case 1:{
            printf("hay nhap so a:");
    		scanf("%d", &a);
    		printf("hay nhap so b:");
    		scanf("%d", &b);
    		printf("Nhap thanh cong");
    		Dn = true;
            getch();
            break;}
        case 2:
            if(Dn){
                printf("Ban chon tinh tong.");
                sum(a,b);
                getch();
                break;}
            else{
                printf("Xin hay nhap so truoc!");
                break;}
        case 3:
            if(Dn){
                printf("Ban chon tinh hieu.");
                sub(a,b);
                getch();
                break;}
            else{
                printf("Xin hay nhap so truoc!");
                break;}
        case 4:
            if(Dn){
                printf("Ban chon tinh tich.");
                multi(a,b);
                getch();
                break;}
            else{
                printf("Xin hay nhap so truoc!");
                break;}
        case 5:
            if(Dn){
                printf("Ban chon tinh thuong.");
                div(a,b);
                getch();
                break;}
            else{
                printf("Xin hay nhap so truoc!");
                break;}
        case 6:
            printf ("Chuong trinh ket thuc");
		    return 0;
		    break;
        default:
        	printf("\nKhong co chuc nang nay!");
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
    } 
}
    
}
void menu(int *ch)
{
	
	printf ("TINH TOAN\n");
	printf ("==================\n");
	printf ("1. Nhap so\n2. Tinh tong\n3. Tinh hieu\n4. Tinh tich\n5. Tinh thuong\n6.Thoat\n");
    printf ("==================\n");   
    printf ("Chon:");
    scanf ("%d", &ch);
}
int sum (int a, int b)
{
	int sum;
	sum = a+b;
	printf ("Tong 2 so la: %d + %d = %d", a, b, sum);
	return (sum);
}
int sub (int a, int b)
{
	int sub;
	sub = a - b;
	printf ("Hieu 2 so la: %d - %d = %d", a, b, sub);
	return (sub);
}
int multi(int a, int b)
{
	int multi;
	multi = a * b;
	printf ("Tich 2 so la: %d * %d = %d", a, b, multi);
	return (multi);
}
int div (int a, int b)
{
	float div;
	if (b!= 0)
	{
		div = a / b;
		printf ("Thuong 2 so la: %d / %d = %f ", a, b, div);
		return (div);
	}
	else 
	   printf ("Khong hop le!!!");
}
