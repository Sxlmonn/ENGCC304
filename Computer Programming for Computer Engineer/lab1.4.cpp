#include <stdio.h>
#include <stdlib.h>

int GetSet(int **data) {
    int num, i;
    
    printf("Enter number of members: ");
    scanf("%d", &num);
    
    *data = (int*)malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) {
        printf("Enter member %d: ", i + 1);
        scanf("%d", &(*data)[i]);
    }
    
    return num;
}

int main() {
    int *data, num;
    num = GetSet(&data);
    free(data);
    return 0;
}