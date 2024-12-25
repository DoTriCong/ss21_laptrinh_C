#include <stdio.h>  
int main() {
    FILE *file;
    char arr[1000];
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt!\n");
        return 1;
    }
    if (fgets(arr, sizeof(arr), file) != NULL) {
        printf("Dong dau tien trong tep: %s", arr);
    } else {
        printf("Tep rong hoac khong co noi dung.\n");
    }
    fclose(file);
    return 0;
}

