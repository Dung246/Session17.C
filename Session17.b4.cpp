#include <stdio.h>

void enterArr(int *arr, int n) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printfEven(int *arr, int n) {
    printf("Cac phan tu la so chan:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
}

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void printfPrime(int *arr, int n) {
    printf("Cac phan tu la so nguyen to:\n");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
}

void turnArr(int *arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void ascendingOrder(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void descendingOrder(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void search(int *arr, int n, int x) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Tim thay %d tai vi tri %d\n", x, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay %d trong mang\n", x);
    }
}

int main() {
    int arr[100], n, choice, x;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                enterArr(arr, n);
                break;
            case 2:
                printfEven(arr, n);
                break;
            case 3:
                printfPrime(arr, n);
                break;
            case 4:
                turnArr(arr, n);
                printf("Mang sau khi dao nguoc: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                break;
            case 5:
                int choice2;
                printf("1. Sap xep tang dan\n");
                printf("2. Sap xep giam dan\n");
                printf("Lua chon cua ban: ");
                scanf("%d", &choice2);
                if (choice2 == 1) {
                    ascendingOrder(arr, n);
                } else if (choice2 == 2) {
                    descendingOrder(arr, n);
                } else {
                    printf("Lua chon khong hop le!\n");
                }
                break;
            case 6:
                printf("Nhap phan tu can tim: ");
                scanf("%d", &x);
                search(arr, n, x);
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
