#include <stdio.h>

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
int isPrime(int num)
{
    if (num <= 1)
        return 0; // จำนวนน้อยกว่าหรือเท่ากับ 1 ไม่ใช่จำนวนเฉพาะ
    if (num == 2)
        return 1; // 2 เป็นจำนวนเฉพาะ
    if (num % 2 == 0)
        return 0; // จำนวนคู่ที่ไม่ใช่ 2 ไม่ใช่จำนวนเฉพาะ

    // ตรวจสอบจำนวนคี่
    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;

    // รับค่าจำนวนข้อมูล
    printf("Enter N :\n");
    scanf("%d", &n);

    int arr[n];

    // รับค่าข้อมูลเข้าไปในอาเรย์
    for (int i = 0; i < n; i++)
    {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    // แสดงผลลัพธ์
    printf("Output:\n");
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            printf("%d ", arr[i]); // แสดงตัวเลขถ้าเป็นจำนวนเฉพาะ
        }
        else
        {
            printf("# "); // แสดง # ถ้าไม่ใช่จำนวนเฉพาะ
        }
    }
    printf("\n");

    return 0;
}