#include<stdio.h>
#include<string.h>

struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[50];
};
int main(){
	SinhVien sv01;
	printf("Moi ban nhap Ho va ten: ");
	fgets(sv01.name, sizeof(sv01.name), stdin);
	printf("Moi ban nhap Tuoi: ");
	scanf("%d", &sv01.age);
	fflush(stdin);
	printf("Moi ban nhap So dien thoai: ");
	fgets(sv01.phoneNumber, sizeof(sv01.phoneNumber), stdin);
    
    printf("\nTHONG TIN SINH VIEN\n");
	printf("Ho va Ten: %s", sv01.name);
	printf("Tuoi: %d\n", sv01.age);
	printf("So dien thoai: %s", sv01.phoneNumber);
	     
	return 0;
}
