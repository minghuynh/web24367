#include <stdio.h>
#include <math.h>
void menu();
void PTBac2();
void LaiSuatNganHang();
int main()
{
	menu();
}
void menu()
{
	int x;
	do
	{
		printf("-------------------------\n");
		printf("Chon gia tri\n");
		printf("1-Tinh phuong trinh bac 2\n2-Tinh lai suat ngan hang\n3-thoat\n");
		printf("--------------------------\n");
		printf("Nhap gia tri: ");
	    scanf("%d", &x);
		switch(x)
	    {
		   case 1: PTBac2(); break;
		   case 2: LaiSuatNganHang(); break;
		   default: break;
	    }
	}
	while(x>=1 && x<=2);
}
void PTBac2()
{
	float a, b, c, denta;
	printf("Nhap gia tri a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	denta=pow(b,2) - 4*a*c;
	if (denta>0)
	{
		float x1, x2;
		x1=(-b+sqrt(denta))/(2*a);
        x2=(-b-sqrt(denta))/(2*a);
		printf("Phuong trinh co 2 nghiem la %g, %g\n", x1, x2);
	}
	else if(denta==0)
	{
		float x;
		x=-b/(2*a);
		printf("Phuong trinh co 1 nghiem la %g\n", x);
	}
	else if(denta<0)
	   printf("Phuong trinh vo nghiem\n");
}
void LaiSuatNganHang()
{
	float v, l;
	int n, y;
	do
	{
		printf("Nhap so tien von, lai suat, so nam gui\n");
	    scanf("%f%f%d", &v, &l, &n);
	}
	while (v<0 || n<0);
	printf("Nam\tTong tien\n");
	for (int i=1, y=2022; i<=n; i++)
	{
		y=y+1;
		printf("%d\t %g\n", y, v*pow(1+l, i));
	}
}