#include <stdio.h>

void enterArr(int *arr, int n) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void showArr(int *arr, int n) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int longArr(int *arr) {
    int count = 0;
    while (*arr != '\0') {
        count++;
        arr++;
    }
    return count;
}

int findSum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int findMax(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[100];
    int n, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                enterArr(arr, n);
                break;
            case 2:
                showArr(arr, n);
                break;
            case 3:
                printf("Do dai mang la: %d\n", longArr(arr));
                break;
            case 4:
                printf("Tong cac phan tu trong mang la: %d\n", findSum(arr, n));
                break;
            case 5:
                printf("Phan tu lon nhat trong mang la: %d\n", findMax(arr, n));
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
