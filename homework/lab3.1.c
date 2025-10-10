#include <stdio.h>

int main() {
    float height, width, area;
    
    printf("H =");
    scanf("%f", &height);
    printf("W =");
    scanf("%f", &width);
    
    area = (height * width) / 2;
    
    printf("Area = %.1f\n", area);
    
    return 0;
}