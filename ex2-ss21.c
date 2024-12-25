#include <stdio.h>
int main() {
    FILE *file;
    char kyTu;
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt!\n");
        return 1;
    }
    kyTu = fgetc(file);
    if (kyTu != EOF) {
        printf("Ky tu dau tien trong tep: %c\n", kyTu);
    } else {
        printf("Tep rong.\n");
    }
    fclose(file);
    return 0;
}

