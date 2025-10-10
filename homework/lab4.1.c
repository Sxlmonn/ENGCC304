#include <stdio.h>

int main() {
    int days;
    long long seconds;
    
    printf("Input Days : ");
    scanf("%d", &days);
    
    seconds = (long long)days * 24 * 60 * 60;
    
    printf("%d days = %lld seconds\n", days, seconds);
    
    return 0;
}