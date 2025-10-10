#include <stdio.h>

int main() {
    int position, years, projects;
    int base_salary;
    float exp_bonus = 0, special_bonus = 0, net_salary;
    
    // รับข้อมูลจากผู้ใช้
    printf("Position: ");
    scanf("%d", &position);
    printf("Years of Experience: ");
    scanf("%d", &years);
    printf("Number of Projects Completed this Year: ");
    scanf("%d", &projects);
    
    // กำหนดเงินเดือนพื้นฐานตามตำแหน่ง
    if (position == 1) {
        base_salary = 20000;
        printf("(Junior Programmer)\n");
    } else if (position == 2) {
        base_salary = 35000;
        printf("(Mid-Level Programmer)\n");
    } else if (position == 3) {
        base_salary = 50000;
        printf("(Senior Programmer)\n");
    } else {
        printf("Invalid position!\n");
        return 1;
    }
    
    // คำนวณโบนัสตามอายุงาน
    if (years < 1) {
        exp_bonus = 0;
    } else if (years >= 1 && years <= 3) {
        exp_bonus = base_salary * 0.10;
    } else if (years >= 4 && years <= 5) {
        exp_bonus = base_salary * 0.15;
    } else if (years > 5) {
        exp_bonus = base_salary * 0.20;
    }
    
    // คำนวณโบนัสพิเศษจากโปรเจค
    if (projects > 5) {
        special_bonus = base_salary * 0.05;
    }
    
    // คำนวณเงินเดือนสุทธิ
    net_salary = base_salary + exp_bonus + special_bonus;
    
    // แสดงผลลัพธ์
    printf("Base Salary: %d THB\n", base_salary);
    printf("Experience Bonus: %.0f THB\n", exp_bonus);
    printf("Special Bonus: %.0f THB\n", special_bonus);
    printf("Net Salary: %.0f THB\n", net_salary);
    
    return 0;
}