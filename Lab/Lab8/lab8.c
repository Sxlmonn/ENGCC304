#include <stdio.h>

int main()
{
    int position, experience_years, completed_projects;
    float base_salary = 0, experience_bonus = 0, special_bonus = 0, total_salary;

    // รับข้อมูลจากผู้ใช้
    printf("โปรแกรมคำนวณเงินเดือนโปรแกรมเมอร์\n");

    printf("เลือกตำแหน่งงาน:\n");
    printf("1 - Junior Programmer\n");
    printf("2 - Mid-Level Programmer\n");
    printf("3 - Senior Programmer\n");
    printf("กรุณาเลือกตำแหน่ง (1-3): ");
    scanf("%d", &position);

    printf("กรุณากรอกจำนวนปีที่ทำงาน: ");
    scanf("%d", &experience_years);

    printf("กรุณากรอกจำนวนโปรเจคที่สำเร็จในปีนี้: ");
    scanf("%d", &completed_projects);

    // กำหนดเงินเดือนพื้นฐานตามตำแหน่ง
    switch (position)
    {
    case 1:
        base_salary = 20000;
        break;
    case 2:
        base_salary = 35000;
        break;
    case 3:
        base_salary = 50000;
        break;
    default:
        printf("ตำแหน่งงานไม่ถูกต้อง!\n");
        return 0;
    }

    // คำนวณโบนัสตามอายุงาน
    if (experience_years < 1)
    {
        experience_bonus = 0;
    }
    else if (experience_years >= 1 && experience_years <= 3)
    {
        experience_bonus = base_salary * 0.10;
    }
    else if (experience_years >= 4 && experience_years <= 5)
    {
        experience_bonus = base_salary * 0.15;
    }
    else if (experience_years > 5)
    {
        experience_bonus = base_salary * 0.20;
    }

    // คำนวณโบนัสพิเศษจากโปรเจค
    if (completed_projects > 5)
    {
        special_bonus = base_salary * 0.05;
    }

    // คำนวณเงินเดือนสุทธิ
    total_salary = base_salary + experience_bonus + special_bonus;

    // แสดงผลลัพธ์
    printf("\n=== ผลการคำนวณ ===\n");
    printf("เงินเดือนพื้นฐาน: %.2f บาท\n", base_salary);
    printf("โบนัสตามอายุงาน: %.2f บาท\n", experience_bonus);
    printf("โบนัสพิเศษ: %.2f บาท\n", special_bonus);
    printf("เงินเดือนสุทธิ: %.2f บาท\n", total_salary);

    return 0;
}