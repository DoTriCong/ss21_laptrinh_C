#include <stdio.h>
int main() {
    char arr[1000];
    FILE *file;
    printf("Nhap chuoi can ghi them: ");
    fgets(arr, sizeof(arr), stdin);
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt!\n");
        return 1;
    }
    fprintf(file, "%s", arr);
    fclose(file);
    printf("Chuoi da duoc ghi them vao tep bt01.txt thanh cong.\n");
    return 0;
}

