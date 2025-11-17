#include <stdio.h>
#include <math.h>

int inputArray(int *array, int *size) {
    printf("Nhap so luong phan tu: ");
    scanf("%d", size);

    if (*size <= 0 || *size > 100) {
        printf("Khong hop le.\n");
        return 0;
    }

    for (int i = 0; i < *size; i++) {
        printf("array[%d] = ", i);
        scanf("%d", array + i);
    }
    return 1;
}


void printEvenNumbers(int *array, int *size) {
    if (*size == 0) {
        printf("Khong hop le\n");
        return;
    }

    printf("So chan la: ");
    for (int i = 0; i < *size; i++) {
        if (array[i] % 2 == 0)
            printf("%d ", array[i]);
    }
    printf("\n");
}


int isPrime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0) return 0;
    return 1;
}

// 3. Print prime numbers
void printPrimeNumbers(int *array, int *size) {
    if (*size == 0) {
        printf("Khong hop le.\n");
        return;
    }

    printf("So nguyen to la: ");
    for (int i = 0; i < *size; i++) {
        if (isPrime(array[i]))
            printf("%d ", array[i]);
    }
    printf("\n");
}

void reverseArray(int *array, int *size) {
    for (int i = 0; i < *size / 2; i++) {
        int temp = array[i];
        array[i] = array[*size - 1 - i];
        array[*size - 1 - i] = temp;
    }

    printf("Mang sau khi dao nguoc ");
    for (int i = 0; i < *size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

// 5. Sort array
void sortArray(int *array, int *size) {
    for (int i = 0; i < *size - 1; i++) {
        for (int j = i + 1; j < *size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Array after sorting: ");
    for (int i = 0; i < *size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

// 6. Search element
void searchElement(int *array, int *size) {
    int value, found = 0;

    printf("Enter value to search: ");
    scanf("%d", &value);

    for (int i = 0; i < *size; i++) {
        if (array[i] == value) {
            printf("Found %d at index %d\n", value, i);
            found = 1;
        }
    }

    if (!found)
        printf("Value %d not found in array.\n", value);
}

int main() {
    int array[100], size = 0, choice;

    while (1) {
       printf("\n+------------------ MENU ------------------+\n");
        printf("1. Nhap vao so phan tu va tung phan tu.\n");
        printf("2. Hien thi cac phan tu la so chan.\n");
        printf("3. Hien thi cac phan tu la so nguyen to.\n");
        printf("4. Dao nguoc mang.\n");
        printf("5. Sap xep mang.\n");
        printf("6. Tim kiem phan tu trong mang.\n");
        printf("7. Thoat.\n");
        printf("+------------------------------------------+\n");

        printf("Nhap lua chon ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray(array, &size);
                break;
            case 2:
                printEvenNumbers(array, &size);
                break;
            case 3:
                printPrimeNumbers(array, &size);
                break;
            case 4:
                reverseArray(array, &size);
                break;
            case 5:
                sortArray(array, &size);
                break;
            case 6:
                searchElement(array, &size);
                break;
            case 7:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

