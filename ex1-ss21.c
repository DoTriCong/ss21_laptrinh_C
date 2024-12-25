#include <stdio.h>
int main() {
    char chuoi[1000];
    FILE *file;
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    file = fopen("bt01.txt", "w");
    fprintf(file, "%s", chuoi);
    fclose(file);
    return 0;
}

