#include<stdio.h>
#include<string.h>

struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[50];
};
int main(){
	SinhVien sv01;
	printf("Moi ban nhap Ho va ten Sv01: ");
	fgets(sv01.name, sizeof(sv01.name), stdin);
	printf("Moi ban nhap Tuoi: ");
	scanf("%d", &sv01.age);
	fflush(stdin);
	printf("Moi ban nhap So dien thoai: ");
	fgets(sv01.phoneNumber, sizeof(sv01.phoneNumber), stdin);
	
	SinhVien sv02;
	printf("\nMoi ban nhap Ho va ten Sv02: ");
	fgets(sv02.name, sizeof(sv02.name), stdin);
	printf("Moi ban nhap Tuoi: ");
	scanf("%d", &sv02.age);
	fflush(stdin);
	printf("Moi ban nhap So dien thoai: ");
	fgets(sv02.phoneNumber, sizeof(sv02.phoneNumber), stdin);
	
	SinhVien sv03;
	printf("\nMoi ban nhap Ho va ten Sv03: ");
	fgets(sv03.name, sizeof(sv03.name), stdin);
	printf("Moi ban nhap Tuoi: ");
	scanf("%d", &sv03.age);
	fflush(stdin);
	printf("Moi ban nhap So dien thoai: ");
	fgets(sv03.phoneNumber, sizeof(sv03.phoneNumber), stdin);
	
	SinhVien sv04;
	printf("\nMoi ban nhap Ho va ten Sv04: ");
	fgets(sv04.name, sizeof(sv04.name), stdin);
	printf("Moi ban nhap Tuoi: ");
	scanf("%d", &sv04.age);
	fflush(stdin);
	printf("Moi ban nhap So dien thoai: ");
	fgets(sv04.phoneNumber, sizeof(sv04.phoneNumber), stdin);
	
	SinhVien sv05;
	printf("\nMoi ban nhap Ho va ten Sv05: ");
	fgets(sv05.name, sizeof(sv05.name), stdin);
	printf("Moi ban nhap Tuoi: ");
	scanf("%d", &sv05.age);
	fflush(stdin);
	printf("Moi ban nhap So dien thoai: ");
	fgets(sv05.phoneNumber, sizeof(sv05.phoneNumber), stdin);
    
    printf("\nTHONG TIN SINH VIEN 01\n");
	printf("Ho va Ten: %s", sv01.name);
	printf("Tuoi: %d\n", sv01.age);
	printf("So dien thoai: %s", sv01.phoneNumber);
	
	printf("\nTHONG TIN SINH VIEN 02\n");
	printf("Ho va Ten: %s", sv02.name);
	printf("Tuoi: %d\n", sv02.age);
	printf("So dien thoai: %s", sv02.phoneNumber);
	
	printf("\nTHONG TIN SINH VIEN 03\n");
	printf("Ho va Ten: %s", sv03.name);
	printf("Tuoi: %d\n", sv03.age);
	printf("So dien thoai: %s", sv03.phoneNumber);
	
	printf("\nTHONG TIN SINH VIEN 04\n");
	printf("Ho va Ten: %s", sv04.name);
	printf("Tuoi: %d\n", sv04.age);
	printf("So dien thoai: %s", sv04.phoneNumber);
	
	printf("\nTHONG TIN SINH VIEN 05\n");
	printf("Ho va Ten: %s", sv05.name);
	printf("Tuoi: %d\n", sv05.age);
	printf("So dien thoai: %s", sv05.phoneNumber);
	     
	return 0;
}
