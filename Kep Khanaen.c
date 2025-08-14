#include <stdio.h>
#include <string.h>

int main()
{
    int choiceDrink, choiceSnack; // ตัวแปรเก็บตัวเลือกเครื่องดื่มและขนม
    int total = 0;                // ตัวแปรเก็บยอดรวมราคาสินค้า
    int money, sumMoney = 0;      // money = เงินหยอดครั้งล่าสุด, sumMoney = เงินสะสมทั้งหมด

    char drinksSelected[500] = ""; // เก็บชื่อเครื่องดื่มที่เลือก
    char snacksSelected[500] = ""; // เก็บชื่อขนมที่เลือก

    // ราคาสินค้า
    int priceD = 10, priceE = 12, priceF = 30, priceG = 35; // เครื่องดื่ม
    int priceH = 13, priceI = 20, priceJ = 15;              // ขนม

    printf("=== เครื่องดื่มและขนม ===\n");

    while (1) // ลูปเลือกสินค้า
    {
        // แสดงรายการสินค้า
        printf("\nเครื่องดื่ม:\n");
        printf("1. โค้ก 10 บาท\n2. น้ำเขียว 12 บาท\n3. อเมริกาโน่ 30 บาท\n4. ลาเต้ 35 บาท\n");
        printf("ขนม:\n");
        printf("1. เมล็ดทานตะวัน 13 บาท\n2. ถั่วแป๊บ 20 บาท\n3. จิ้นส้มหมก 15 บาท\n");

        int side;
        printf("เลือกฝั่งสินค้า (1=เครื่องดื่ม, 2=ขนม): ");
        scanf("%d", &side); // รับฝั่งสินค้าที่เลือก

        if (side == 1) // ถ้าเลือกเครื่องดื่ม
        {
            printf("เลือกเครื่องดื่ม (1-4): ");
            scanf("%d", &choiceDrink); // รับตัวเลือกเครื่องดื่ม

            // บวกราคาตามตัวเลือก และเก็บชื่อเครื่องดื่ม
            if (choiceDrink == 1)
            {
                total += priceD;
                strcat(drinksSelected, "โค้ก ");
            }
            else if (choiceDrink == 2)
            {
                total += priceE;
                strcat(drinksSelected, "น้ำเขียว ");
            }
            else if (choiceDrink == 3)
            {
                total += priceF;
                strcat(drinksSelected, "อเมริกาโน่ ");
            }
            else if (choiceDrink == 4)
            {
                total += priceG;
                strcat(drinksSelected, "ลาเต้ ");
            }
            else
            {
                printf("เลือกไม่ถูกต้อง\n");
                continue;
            } // ถ้าเลือกไม่ถูกต้อง กลับไปลูปเดิม
        }
        else if (side == 2) // ถ้าเลือกขนม
        {
            printf("เลือกขนม (1-3): ");
            scanf("%d", &choiceSnack); // รับตัวเลือกขนม

            // บวกราคาตามตัวเลือก และเก็บชื่อขนม
            if (choiceSnack == 1)
            {
                total += priceH;
                strcat(snacksSelected, "เมล็ดทานตะวัน ");
            }
            else if (choiceSnack == 2)
            {
                total += priceI;
                strcat(snacksSelected, "ถั่วแป๊บ ");
            }
            else if (choiceSnack == 3)
            {
                total += priceJ;
                strcat(snacksSelected, "จิ้นส้มหมก ");
            }
            else
            {
                printf("เลือกไม่ถูกต้อง\n");
                continue;
            } // ถ้าเลือกไม่ถูกต้อง กลับไปลูปเดิม
        }
        else
        {
            printf("เลือกฝั่งไม่ถูกต้อง\n");
            continue;
        } // ถ้าไม่ใช่ 1 หรือ 2 กลับไปลูปเดิม

        int more;
        printf("ต้องการเลือกสินค้าเพิ่มไหม? (1=ใช่, 0=ไม่): ");
        scanf("%d", &more); // ถามผู้ใช้ว่าจะเลือกเพิ่มหรือไม่
        if (more == 0)
            break; // ถ้าไม่เลือกเพิ่ม ออกจากลูป
    }

    // แสดงรายการสินค้าที่เลือกแยกเครื่องดื่มกับขนม
    printf("\n=== สินค้าที่เลือก ===\n");
    if (strlen(drinksSelected) > 0) // ถ้ามีเครื่องดื่มที่เลือก
        printf("เครื่องดื่ม: %s\n", drinksSelected);
    if (strlen(snacksSelected) > 0) // ถ้ามีขนมที่เลือก
        printf("ขนม: %s\n", snacksSelected);

    printf("รวมราคาสินค้า: %d บาท\n", total); // แสดงยอดรวมสินค้า

    // ลูปสำหรับหยอดเงินสะสม
    do
    {
        printf("หยอดเงิน: ");
        scanf("%d", &money);
        sumMoney += money; // บวกเงินหยอดครั้งล่าสุดกับยอดสะสม

        if (sumMoney < total) // ถ้าเงินยังไม่พอ
        {
            int remaining = total - sumMoney; // คำนวณเงินที่ยังต้องหยอดเพิ่ม
            printf("ยอดสะสม %d บาท ยังไม่พอ! ต้องหยอดเพิ่มอีก %d บาท\n", sumMoney, remaining);
        }
    } while (sumMoney < total); // ทำซ้ำจนเงินสะสมพอ

    if (sumMoney > total) // ถ้าเงินหยอดเกิน ให้ทอนเงิน
        printf("ทอนเงิน %d บาท\n", sumMoney - total);

    printf("กรุณารับสินค้า\n"); // ข้อความจบการทำงาน

    return 0; // จบโปรแกรม
}
