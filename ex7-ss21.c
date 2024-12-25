#include <stdio.h>
typedef struct {
    int id;
    char name[100];
    int age;
} SinhVien;
int main() {
    FILE *file;
    int soLuong;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &soLuong);
    getchar();
    SinhVien sinhViens[soLuong];
    for (int i = 0; i < soLuong; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &sinhViens[i].id);
        getchar();
        printf("Name: ");
        fgets(sinhViens[i].name, sizeof(sinhViens[i].name), stdin);
        printf("Age: ");
        scanf("%d", &sinhViens[i].age);
        getchar();
    }
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Khong the tao tep students.txt!\n");
        return 1;
    }
    for (int i = 0; i < soLuong; i++) {
        fprintf(file, "%d,%s,%d\n", sinhViens[i].id, sinhViens[i].name, sinhViens[i].age);
    }
    fclose(file);
    printf("Thong tin sinh vien da duoc luu vao tep students.txt.\n");
    return 0;
}

