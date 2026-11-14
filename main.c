/*
Жигунов Кирилл Андреевич
ПИ 1-1
"Линейный и двоичный поиск"
*/
#include <stdio.h>

int linear(const int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) return 1;
    }
    return -1;
}

int binary(const int a[], int n, int key) {
    int left = 0, right = n-1;
    while (left <= right) {
        int mid = left + (right - left)/2;
        if(a[mid] == key) return mid;
        if(a[mid] < key) left = mid + 1;
        else right = mid - 1; 
    }
    return -1;
}

int main(void) {
	int a[] = {-4, -1, 2, 6, 9};
	for (int key = 2; key <= 3; key++) {
	    printf("%d: %d %d\n", key, linear(a, 5, key), binary(a, 5, key));
	}
    return 0;
}

