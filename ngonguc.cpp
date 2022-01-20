#include <stdio.h>
int main()
{
	int x, y;
	float r;
	printf("Nhap toa do\n");
	printf("x = ");
	scanf("%d", &x);
	printf("y = ");
	scanf("%d", &y);
	do
	{
		printf("Nhap ban kinh r: ");
		scanf("%f", &r);
	}
	while (r<0);
	if (result == 1)
	   printf("Diem nam trong duong tron\n");
	else if (result == 0) 
	   printf("Diem nam tren duong tron\n");
	else 
	   printf("Diem nam ngoai duong tron\n");
}
int getrelpos(int x, int y, float r)
{
	double d2;
	d2 = x*x + y*y;
	if (d2<r) 
}
