#include <stdio.h>

// ฟังก์ชันหาค่าต่ำสุด
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// ฟังก์ชันหาค่าสูงสุด
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[100];
    int size = 0;
    
    // รับค่าจากผู้ใช้
    printf("Enter value:\n");
    
    // อ่านค่าจนกว่าจะกด Enter
    char buffer[1000];
    fgets(buffer, sizeof(buffer), stdin);
    
    // แยกค่าจากสตริง
    char *token = strtok(buffer, " ");
    while (token != NULL && size < 100) {
        arr[size] = atoi(token);
        size++;
        token = strtok(NULL, " ");
    }
    
    // แสดง index
    printf("Index: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // แสดง array
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    // หาและแสดงค่าต่ำสุดและสูงสุด
    int min = findMin(arr, size);
    int max = findMax(arr, size);
    
    printf("Min : %d\n", min);
    printf("Max : %d\n", max);
    
    return 0;
}