#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice, guess, answer, score;
    int min_range, max_range;
    
    srand(time(NULL));
    
    do {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        scanf("%d", &choice);
        
        if (choice == 1) {
            // เริ่มเกมใหม่
            score = 100;
            answer = rand() % 100 + 1;
            min_range = 1;
            max_range = 100;
            
            printf("(Score=%d)\n", score);
            
            do {
                printf("\nGuess the winning number (%d-%d) :\n", min_range, max_range);
                scanf("%d", &guess);
                
                if (guess == answer) {
                    printf("\nThat is correct! The winning number is %d.\n", answer);
                    printf("\nScore this game: %d\n", score);
                    break;
                } else {
                    score -= 10;
                    if (guess < answer) {
                        printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
                        min_range = guess + 1;
                    } else {
                        printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
                        max_range = guess - 1;
                    }
                }
                
            } while (score > 0);
            
            if (score <= 0) {
                printf("\nGame Over! You ran out of points.\n");
                printf("The winning number was %d.\n", answer);
            }
            
        } else if (choice == -1) {
            printf("\nSee you again.\n");
        } else {
            printf("Invalid choice. Please enter 1 to play or -1 to exit.\n");
        }
        
    } while (choice != -1);
    
    return 0;
}