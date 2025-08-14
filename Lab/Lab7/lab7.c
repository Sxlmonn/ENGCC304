#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int play_again = 1;

    // ตั้งค่า seed สำหรับการสุ่มตัวเลข
    srand(time(0));

    while (play_again == 1)
    {
        int score = 100;
        int secret_number = rand() % 100 + 1; // สุ่มตัวเลข 1-100
        int guess;

        printf("เริ่มเกมทายตัวเลข! คุณมีคะแนนเต็ม 100\n");

        while (1)
        {
            printf("ทายตัวเลขของคุณ (1-100) หรือป้อน -1 เพื่อออก: ");
            scanf("%d", &guess);

            // ตรวจสอบว่าผู้ใช้ต้องการออกจากเกมหรือไม่
            if (guess == -1)
            {
                play_again = -1;
                break;
            }

            // ตรวจสอบคำตอบ
            if (guess == secret_number)
            {
                printf("ยินดีด้วย! คุณทายถูกต้อง ตัวเลขคือ %d\n", secret_number);
                printf("คะแนนปัจจุบันของคุณ: %d\n", score);
                break;
            }
            else
            {
                score -= 10; // ลดคะแนน
                if (score <= 0)
                {
                    printf("คุณเสียคะแนนทั้งหมด! เกมจบลง\n");
                    break;
                }

                printf("คำตอบไม่ถูกต้อง! คะแนนปัจจุบัน: %d\n", score);

                // ให้คำใบ้
                if (guess < secret_number)
                {
                    printf("คำตอบที่ถูกต้องมีค่ามากกว่า %d\n", guess);
                }
                else
                {
                    printf("คำตอบที่ถูกต้องมีค่าน้อยกว่า %d\n", guess);
                }
            }
        }

        // ถ้ายังไม่เลือกออกจากเกม ให้ถามว่าจะเล่นอีกครั้งหรือไม่
        if (play_again != -1)
        {
            printf("ต้องการเล่นอีกครั้งหรือไม่? (1 = ใช่, -1 = ไม่): ");
            scanf("%d", &play_again);
        }
    }

    printf("ขอบคุณที่เล่นเกมของเรา!\n");
    return 0;
}