#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
void Menu(int a[], int &n);
void NhapMangRanDom(int a[], int &n)
{
	printf("Chao mung cac ban\n");
	printf("Nhap so phan tu mang: ");
	scanf("%d", &n);
	srand(time(0));
	for (int i=0; i<n; i++)
	   a[i] = 1 + rand() % (100-1+1);
}
void XuatMang(int a[], int n)
{
	printf("Cac phan tu cua mang la:\n");
	for (int i=0; i<n; i++)
	   printf("%d\t", a[i]);
	printf("\n");
}
void LuaChon2(int a[], int n)
{
	printf("Cac so chia het cho 4 ma khong chia het cho 5 la:\n");
	for (int i=0; i<n; i++)
		if (a[i]%4==0 && a[i]%5!=0) 
		   printf("%d\t", a[i]);
	printf("\n");
}
void Xoa(int a[], int &n, int i)
{
	for (int j=i; j<n-1; j++)
	   a[j] = a[j+1];
	n--; 
}
void LuaChon3(int a[], int &n)
{
	int x, nBandau=n;
	printf("Nhap gia tri x can xoa: ");
	scanf("%d", &x);
	for (int i=0; i<n-1; i++)
		if (a[i]==x) Xoa(a,n,i);
	if (nBandau==n) printf("Khong tim thay so nguyen x\n");
	else printf("Da xoa\n");
}
int main()
{
	int a[100], n;
	NhapMangRanDom(a,n);
	Menu(a,n);
}
void Menu(int a[], int &n)
{
	int x;
	do
	{
		printf("----------------------------\n");
		printf("1-XuatMang\n");
	    printf("2-Nhung so chia het cho 4 ma khong chia het cho 5\n");
    	printf("3-Xoa so nguyen\n");
	    printf("Chon gia tri: ");
	    scanf("%d", &x);
	    switch (x)
	    {
		case 1: XuatMang(a,n); break;
		case 2: LuaChon2(a,n); break;
		case 3: LuaChon3(a,n); break;
		default: printf("Gia tri khong hop le\n"); 
    	}
	}
	while (x>=1 && x<=3);
}

