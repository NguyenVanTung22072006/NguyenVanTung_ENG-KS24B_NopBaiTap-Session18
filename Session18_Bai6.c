#include <stdio.h>
#include <string.h>

struct SinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void themSinhVien(struct SinhVien sinhViens[], int *soLuong);
void inThongTinSinhVien(struct SinhVien sinhViens[], int soLuong);
int main(){
    struct SinhVien sinhViens[50]={
        {1, "Nguyen Van A", 11, "0123456789"},
        {2, "Nguyen Van B", 12, "0987654321"},
        {3, "Nguyen Van C", 13, "0912345678"},
        {4, "Nguyen Van D", 14, "0923456781"},
        {5, "Nguyen Van E", 15, "0934567812"},
    };
    
    int soLuongHienTai=5;
    printf(" Thong Tin Sinh Vien Truoc Khi Them \n");
    inThongTinSinhVien(sinhViens, soLuongHienTai);
    themSinhVien(sinhViens, &soLuongHienTai);
    printf("\n Thong Tin Sinh Vien Sau Khi Them \n");
    inThongTinSinhVien(sinhViens, soLuongHienTai);

    return 0;
}
void themSinhVien(struct SinhVien sinhViens[], int *soLuong){
    struct SinhVien svMoi;
    printf("\nNhap thong tin sinh vien moi:\n");
    printf("ID: ");
    scanf("%d", &svMoi.id);
    printf("Ten: ");
    scanf(" %49[^\n]", svMoi.name);
    printf("Tuoi: ");
    scanf("%d", &svMoi.age);
    printf("So dien thoai: ");
    scanf(" %14s", svMoi.phoneNumber);
    sinhViens[*soLuong] = svMoi;
    (*soLuong)++;
}
void inThongTinSinhVien(struct SinhVien sinhViens[], int soLuong){
    for(int i=0; i<soLuong; i++){
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n",
               sinhViens[i].id, sinhViens[i].name, sinhViens[i].age, sinhViens[i].phoneNumber);
    }
}
