#include <stdio.h>
#include <math.h>
#include <conio.h>
void nhapMang(int a[], int &n) {
	n = 0;
	int x;
	do {
		printf("Nhap 1 so nguyen cua mang . Nhap so 0 de ket thuc : ");
		scanf("%d", &x);
		if (x != 0)
			a[n++] = x;
	} while(x != 0);
}
void xuatMang(int a[], int n) {
	for(int i = 0; i<n;i++)
		printf("%4d", a[i]);
} 
long tongDuong(int a[], int n) {
	int dem = 0;
	if (n== 0)
		return 0;
	if (a[n-1] > 0 ) 
		return tongDuong(a , n -1) + 1;
		return tongDuong(a , n -1);
}
int main () {
	int n;
	int a[100];
	nhapMang(a,n);
	printf("\nmang vua nhap ");
	xuatMang(a,n);
	
	int tong = tongDuong(a,n);
	printf("\n so luong cac so duong co trong mang : %d ", tong);
	getch();
	return 0;
}
