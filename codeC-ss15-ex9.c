#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char kyTuXoa;
    int i, j = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &kyTuXoa);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != kyTuXoa) {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", kyTuXoa, str);

    return 0;
}

