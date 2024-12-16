#include <stdio.h>

void inputArray(int *arr, int *n) {
    printf("nhap vao so phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int *arr, int n) {
    printf("cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int arrayLength(int *arr) {
    return sizeof(arr) / sizeof(arr[0]);
}

int sumArray(int *arr, int n) {
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
    int choice, n;
    int arr[100];
    
    do {
        printf("\nMENU\n");
        printf("1. nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("chon: ");
        
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                inputArray(arr, &n);
                break;
            case 2:
                displayArray(arr, n);
                break;
            case 3:
                printf("do dai mang la: %d\n", n);
                break;
            case 4:
                printf("Tong cac phan tu trong mang la: %d\n", sumArray(arr, n));
                break;
            case 5:
                printf("phan tu lon nhat trong mang la: %d\n", findMax(arr, n));
                break;
            case 6:
                printf("thoat.\n");
                break;
            default:
                printf("lua chon sai.\n");
                break;
        }
        
    } while (choice != 6);
    
    return 0;
}
