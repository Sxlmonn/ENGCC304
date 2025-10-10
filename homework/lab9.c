#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
int isPrime(int num) {
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    
    printf("Enter N :\n");
    scanf("%d", &n);
    
    int arr[n];
    
    // รับค่าจากผู้ใช้
    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }
    
    // แสดง Index
    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // แสดง Array (เฉพาะจำนวนเฉพาะ)
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        } else {
            printf("# ");
        }
    }
    printf("\n");
    
    return 0;
}