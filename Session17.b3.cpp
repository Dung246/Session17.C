#include <stdio.h>
#include <ctype.h>

void enterStr(char *str) {
    printf("Nhap vao chuoi: ");
    scanf("%s", str);
}

void turnStr(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int countWords(char *str) {
    int count = 1;
    while (*str) {
        if (*str == ' ') {
            count++;
        }
        str++;
    }
    return count;
}

void compareStr(char *str1, char *str2) {
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }
    if (len1 > len2) {
        printf("Chuoi ban dau dai hon chuoi vua nhap.\n");
    } else if (len1 < len2) {
        printf("Chuoi vua nhap dai hon chuoi ban dau.\n");
    } else {
        printf("Hai chuoi co do dai bang nhau.\n");
    }
}

void strPrintf(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

void combineStr(char *str1, char *str2) {
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }
    while (*str2) {
        str1[len1] = *str2;
        len1++;
        str2++;
    }
    str1[len1] = '\0';
}

int main() {
    char str[100], str2[100];
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. So sanh chuoi voi chuoi khac\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Noi chuoi voi chuoi khac\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enterStr(str);
                break;
            case 2:
                turnStr(str);
                printf("Chuoi dao nguoc: %s\n", str);
                break;
            case 3:
                printf("So luong tu trong chuoi: %d\n", countWords(str));
                break;
            case 4:
                enterStr(str2);
                compareStr(str, str2);
                break;
            case 5:
                strPrintf(str);
                printf("Chuoi sau khi in hoa: %s\n", str);
                break;
            case 6:
                enterStr(str2);
                combineStr(str, str2);
                printf("Chuoi sau khi noi: %s\n", str);
                break;
            case 7:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Xin vui long chon lai!\n");
        }
    } while (choice != 7);

    return 0;
}
