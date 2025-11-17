#include <stdio.h>

// nhap mang
int nhapMang(int *arr, int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);

    if (*n <= 0 || *n > 100) {
        printf("So phan tu khong hop le!\n");
        return 0;
    }

    for (int i = 0; i < *n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);  
    }
    return 1;
}

// in mang
void inMang(int *arr, int n) {
    if (n == 0) {
        printf("Mang rong.\n");
        return;
    }

    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// do dai mang
int doDaiMang(int n) {
    return n;
}

// tong cac phan tu
int tongMang(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(arr + i);
    return sum;
}

// phan tu lon nhat
int lonNhat(int *arr, int n) {
    if (n == 0) return -1;

    int max = *arr;
    for (int i = 1; i < n; i++)
        if (*(arr + i) > max)
            max = *(arr + i);

    return max;
}

int main() {
    int arr[100], n = 0, choice;

    while (1) {
        printf("\n+------------------ MENU ------------------+\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("+------------------------------------------+\n");

        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;

            case 2:
                inMang(arr, n);
                break;

            case 3:
                printf("Do dai mang: %d\n", doDaiMang(n));
                break;

            case 4:
                printf("Tong cac phan tu: %d\n", tongMang(arr, n));
                break;

            case 5:
                if (n == 0) printf("Mang rong!\n");
                else printf("Phan tu lon nhat: %d\n", lonNhat(arr, n));
                break;

            case 6:
                printf("Thoat chuong trinh...\n");
                return 0;

            default:
                printf("Lua chon khong hop le!\n");
        }
    }

    return 0;
}

