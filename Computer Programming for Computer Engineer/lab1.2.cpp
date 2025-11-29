#include <stdio.h>
#include <stdlib.h>

void GetSet(int **data, int *num) {
    int i;
    
    printf("Enter number of members: ");
    scanf("%d", num);
    
    *data = (int*)malloc(*num * sizeof(int));
    
    for(i = 0; i < *num; i++) {
        printf("Enter member %d: ", i + 1);
        scanf("%d", &(*data)[i]);
    }
    
    printf("All members: ");
    for(i = 0; i < *num; i++) {
        printf("%d ", (*data)[i]);
    }
}

int main() {
    int *data, num;
    GetSet(&data, &num);
    free(data);
    return 0;
}