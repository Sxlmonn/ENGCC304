#include <stdio.h>

int main() {
    int n;
    
    // รับค่าจำนวนบรรทัดจากผู้ใช้
    scanf("%d", &n);
    
    // แสดงผลลัพธ์ตามจำนวนบรรทัด
    for(int i = 1; i <= n; i++) {
        printf("[%d] Hello world\n", i);
    }
    
    return 0;
}