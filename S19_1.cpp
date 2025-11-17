#include<stdio.h>

int findMax(int *arr, int n){
	if (n == 0) {
	return -1;
}
    int max = *arr;
    for (int i = 1; i < n; i++){
        if (*(arr + i) > max)
            max = *(arr + i);
    } printf("Max = %d ", max);
    return max;
}

int main(){
	int n[6]={1,2,3,4,5,6};
	findMax(n,6);
	return 0;
}
