#include <stdio.h>

int main() {
    char empID[11];  // รหัสพนักงานสูงสุด 10 ตัวอักษร + 1 ตัวสำหรับ null-terminator
    int workingHours;
    double salaryPerHour, totalSalary;

    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%10s", empID);  // รับstringไม่เกิน 10 ตัวอักษร

    printf("Input the working hrs: \n");
    scanf("%d", &workingHours);

    printf("Salary amount/hr: \n");
    scanf("%lf", &salaryPerHour);

    totalSalary = workingHours * salaryPerHour;

    printf("Employees ID = %s\n", empID);
    printf("Salary = U$ %.2lf\n", totalSalary);

    return 0;
}