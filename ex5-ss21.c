#include <stdio.h>
int main() {
    FILE *file;
    int soDong;
    char noiDung[1000];
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the tao tep bt05.txt!\n");
        return 1;
    }
    printf("Nhap so dong: ");
    scanf("%d", &soDong);
    getchar();
    for (int i = 0; i < soDong; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(noiDung, sizeof(noiDung), stdin);
        fprintf(file, "%s", noiDung);
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong the mo tep bt05.txt de doc!\n");
        return 1;
    }
    printf("\nNoi dung trong tep bt05.txt:\n");
    while (fgets(noiDung, sizeof(noiDung), file) != NULL) {
        printf("%s", noiDung);
    }
    fclose(file);

    return 0;
}

