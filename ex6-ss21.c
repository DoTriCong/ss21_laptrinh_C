#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char noiDung[1000];
    file1 = fopen("bt01.txt", "r");
    if (file1 == NULL) {
        printf("Khong the mo tep bt01.txt de doc!\n");
        return 1;
    }
    file2 = fopen("bt06.txt", "w");
    if (file2 == NULL) {
        printf("Khong the tao tep bt06.txt de ghi!\n");
        fclose(file1);
        return 1;
    }
    while (fgets(noiDung, sizeof(noiDung), file1) != NULL) {
        fputs(noiDung, file2);
    }
    fclose(file1);
    fclose(file2);
    printf("Da sao chep noi dung tu bt01.txt sang bt06.txt thanh cong.\n");
  return 0;
}
