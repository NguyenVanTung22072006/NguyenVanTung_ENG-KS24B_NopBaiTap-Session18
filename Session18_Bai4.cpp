#include<stdio.h>
#include<string.h>

struct SinhVien{
	int id;
	char name[50];
	int age;
	char phoneNumber[50];
};
int main(){
	SinhVien dsSv[50];
	int n=5;
	for(int i=0; i<n; i++){
		printf("\nNhap thong tin sinh vien thu %d:\n ", i+1);
		dsSv[i].id=i+1;
		printf("Nhap ho va ten: ");
		fgets(dsSv[i].name, sizeof(dsSv[i].name), stdin);
		printf("Nhap tuoi: ");
		scanf("%d", &dsSv[i].age);
		fflush(stdin);
		printf("Nhap so dien thoai: ");
		fgets(dsSv[i].phoneNumber, sizeof(dsSv[i].phoneNumber), stdin);
	}
	printf("\n                    Thong tin cac sinh vien");
    for (int i=0; i<n; i++){
        printf("\nSinh vien thu %d: \n", i+1);
        printf("ID: %d\n", dsSv[i].id);
        printf("Ho va ten: %s", dsSv[i].name);
        printf("Tuoi: %d\n", dsSv[i].age);
        printf("So dien thoai: %s\n", dsSv[i].phoneNumber);
    }

	return 0;
}
