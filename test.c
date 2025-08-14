#include <stdio.h>
#include <string.h>

int main()
{
    int total = 0, money, sumMoney = 0;

    // สต็อกสินค้า
    int stockD = 1, stockE = 2, stockF = 1, stockG = 3; // เครื่องดื่ม
    int stockH = 1, stockI = 5, stockJ = 0;             // ขนม

    // ราคาสินค้า
    int priceD = 10, priceE = 12, priceF = 30, priceG = 35;
    int priceH = 13, priceI = 20, priceJ = 15;

    // รายการที่เลือก
    char drinksSelected[100] = "";
    char snacksSelected[100] = "";

    int choiceDrink, choiceSnack, side, more;

    printf("=== เครื่องดื่มและขนม ===\n");

    while (1)
    {
        printf("\nเครื่องดื่ม:\n1. โค้ก 10 บาท (%d ขวด)\n2. น้ำเขียว 12 บาท (%d ขวด)\n3. อเมริกาโน่ 30 บาท (%d ขวด)\n4. ลาเต้ 35 บาท (%d ขวด)\n",
               stockD, stockE, stockF, stockG);
        printf("ขนม:\n1. เมล็ดทานตะวัน 13 บาท (%d ถุง)\n2. ถั่วแป๊บ 20 บาท (%d ถุง)\n3. จิ้นส้มหมก 15 บาท (%d ถุง)\n",
               stockH, stockI, stockJ);

        printf("เลือกฝั่งสินค้า (1=เครื่องดื่ม, 2=ขนม): ");
        scanf("%d", &side);

        if (side == 1)
        {
            printf("เลือกเครื่องดื่ม (1-4): ");
            scanf("%d", &choiceDrink);
            if (choiceDrink == 1)
            {
                if (stockD > 0)
                {
                    total += priceD;
                    stockD--;
                    strcat(drinksSelected, "โค้ก ");
                }
                else
                {
                    printf("โค้กหมดแล้ว!\n");
                    continue;
                }
            }
            else if (choiceDrink == 2)
            {
                if (stockE > 0)
                {
                    total += priceE;
                    stockE--;
                    strcat(drinksSelected, "น้ำเขียว ");
                }
                else
                {
                    printf("น้ำเขียวหมดแล้ว!\n");
                    continue;
                }
            }
            else if (choiceDrink == 3)
            {
                if (stockF > 0)
                {
                    total += priceF;
                    stockF--;
                    strcat(drinksSelected, "อเมริกาโน่ ");
                }
                else
                {
                    printf("อเมริกาโน่หมดแล้ว!\n");
                    continue;
                }
            }
            else if (choiceDrink == 4)
            {
                if (stockG > 0)
                {
                    total += priceG;
                    stockG--;
                    strcat(drinksSelected, "ลาเต้ ");
                }
                else
                {
                    printf("ลาเต้หมดแล้ว!\n");
                    continue;
                }
            }
            else
            {
                printf("เลือกไม่ถูกต้อง\n");
                continue;
            }
        }
        else if (side == 2)
        {
            printf("เลือกขนม (1-3): ");
            scanf("%d", &choiceSnack);
            if (choiceSnack == 1)
            {
                if (stockH > 0)
                {
                    total += priceH;
                    stockH--;
                    strcat(snacksSelected, "เมล็ดทานตะวัน ");
                }
                else
                {
                    printf("เมล็ดทานตะวันหมดแล้ว!\n");
                    continue;
                }
            }
            else if (choiceSnack == 2)
            {
                if (stockI > 0)
                {
                    total += priceI;
                    stockI--;
                    strcat(snacksSelected, "ถั่วแป๊บ ");
                }
                else
                {
                    printf("ถั่วแป๊บหมดแล้ว!\n");
                    continue;
                }
            }
            else if (choiceSnack == 3)
            {
                if (stockJ > 0)
                {
                    total += priceJ;
                    stockJ--;
                    strcat(snacksSelected, "จิ้นส้มหมก ");
                }
                else
                {
                    printf("จิ้นส้มหมกหมดแล้ว!\n");
                    continue;
                }
            }
            else
            {
                printf("เลือกไม่ถูกต้อง\n");
                continue;
            }
        }
        else
        {
            printf("เลือกฝั่งไม่ถูกต้อง\n");
            continue;
        }

        printf("ต้องการเลือกสินค้าเพิ่มไหม? (1=ใช่, 0=ไม่): ");
        scanf("%d", &more);
        if (more == 0)
            break;
    }

    printf("\n=== สินค้าที่เลือก ===\n");
    if (strlen(drinksSelected) > 0)
        printf("เครื่องดื่ม: %s\n", drinksSelected);
    if (strlen(snacksSelected) > 0)
        printf("ขนม: %s\n", snacksSelected);

    printf("รวมราคาสินค้า: %d บาท\n", total);

    // หยอดเงินสะสม
    do
    {
        printf("หยอดเงิน: ");
        scanf("%d", &money);
        sumMoney += money;
        if (sumMoney < total)
            printf("ยอดสะสม %d บาท ยังไม่พอ! ต้องหยอดเพิ่มอีก %d บาท\n", sumMoney, total - sumMoney);
    } while (sumMoney < total);

    int change = sumMoney - total;
    if (change > 0)
        printf("ทอนเงิน %d บาท\n", change);

    printf("กรุณารับสินค้า\n");
    return 0;
}
