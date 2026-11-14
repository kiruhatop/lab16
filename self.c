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

int count_key(const int a[], int n, int key) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (key == a[i]) cnt += 1; 
    }
    return cnt;
}

int first_key(const int a[], int n, int key) {
    int first_index = 0;
    for (int i = 0; i < n; i++) {
        if (key == a[i]) first_index == i-1; 
    }
    return first_index;
    if (first_index == 0) return -1;
}

int main(void) {
	int a[] = {2, 7, 2, -1, 2};
	for (int key = 2; key <= 3; key++) {
	    printf("%d: %d %d\n", key, linear(a, 5, key), binary(a, 5, key));
	    printf("%d: %d\n", key, count_key(a, 5, key));
	    printf("%d: %d\n", key, first_key(a, 5, key));
	    
	}
    
    return 0;
}

