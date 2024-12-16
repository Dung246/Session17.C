#include <stdio.h>
#include <ctype.h>

void enterChain(char *str) {
    printf("Nhap vao chuoi: ");
    scanf("%s", str); 
}

void printfChain(char *str) {
    printf("Chuoi vua nhap la: %s\n", str);
}

int countAlphabet(char *str) {
    int count = 0;
    while (*str) {
        if (isalpha(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int countNum(char *str) {
    int count = 0;
    while (*str) {
        if (isdigit(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int countChar(char *str) {
    int count = 0;
    while (*str) {
        if (!isalpha(*str) && !isdigit(*str) && *str != ' ') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enterChain(str);
                break;
            case 2:
                printfChain(str);
                break;
            case 3:
                printf("So luong chu cai: %d\n", countAlphabet(str));
                break;
            case 4:
                printf("So luong chu so: %d\n", countNum(str));
                break;
            case 5:
                printf("So luong ky tu dac biet: %d\n", countChar(str));
                break;
            case 6:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Xin vui long chon lai!\n");
        }
    } while (choice != 6);

    return 0;
}
