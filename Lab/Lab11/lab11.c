#include <stdio.h>

int main() {
    int n, t, d = 0, s = 0;
    
    printf("ป้อนตัวเลข: ");
    scanf("%d", &n);
    
    // ลูปนับจำนวนหลัก
    for (t = n; t; t /= 10) d++;
    
    // ลูปคำนวณผลรวมยกกำลัง
    for (t = n; t; t /= 10) {
        int p = 1, r = t % 10;
        for (int i = 0; i < d; i++) p *= r;
        s += p;
    }
    
    // ตรวจสอบและแสดงผล
    printf(s == n ? "Pass\n" : "Not Pass\n");
    return 0;
}

// n = ตัวเลขที่ผู้ใช้ป้อน
// t = ตัวแปรชั่วคราวสำหรับคำนวณ
// d = จำนวนหลัก (digits)
// s = ผลรวม (sum)