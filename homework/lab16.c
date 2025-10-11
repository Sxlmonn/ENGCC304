#include <stdio.h>

int main() {
    int arr[] = {15, 7, 25, 3, 73, 32, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 32;
    int pos = -1;
    
    // แสดงข้อมูลเดิม
    printf("Old Series : ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
    
    // เรียงข้อมูลจากน้อยไปมาก (ใช้ Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // สลับข้อมูล
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // แสดงข้อมูลหลังจากเรียง
    printf("New Series : ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
    
    // หาตำแหน่งของเลข 32
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            pos = i;
            break;
        }
    }
    
    printf("Pos of 32 : %d\n", pos);
    
    return 0;
}