#include<stdio.h>

void average(int *arr, int n){
	float sum;
	for(int i = 0; i<n; i++){
		sum += *(arr+i);
		
	} float avr = sum / n;
	printf("Gia tri trung binh la: %.2f", avr);
}

int main(){
	int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    average(arr,n);
    
    return 0;
}
