#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i,j;
	int mon[30][4];
    int sum[30];
	
	
	for(i=0;i<30;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("nhap vao diem [%d][%d]: ",i+1, j+1);
			scanf("%d",&mon[i][j]);
		}
		printf("\n");
	}
	
		for(i=1;i<30;i++)
	{
		for(j=1;j<4;j++)
		{
		printf("Hoc sinh [%d][%d] la %d \n",i,j,mon[i][j]);
		sum[i] += mon[i][j];
		}
		    printf("diem tong :%d\n",sum[i]);
			printf("diem trung binh %d = %d\n",i, sum[i]/4);
			printf("\n");			
	}
}
