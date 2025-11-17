#include <stdio.h>

void countEvenOdd(int *arr, int n, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            (*evenCount)++;
        else
            (*oddCount)++;
    }
}

void printEvenNumbers(int *arr, int n) {
    printf("Danh sach so chan: ");
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            printf("%d ", *(arr + i));
    }
    printf("\n");
}

void printOddNumbers(int *arr, int n) {
    printf("Danh sach so le: ");
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 != 0)
            printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int n;
    int arr[100];

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }

    int evenCount, oddCount;
    countEvenOdd(arr, n, &evenCount, &oddCount);

    printf("\nSo luong so chan: %d\n", evenCount);
    printf("So luong so le : %d\n", oddCount);
    printEvenNumbers(arr, n);
    printOddNumbers(arr, n);

    return 0;
}

