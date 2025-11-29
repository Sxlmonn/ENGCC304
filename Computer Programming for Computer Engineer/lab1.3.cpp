#include <stdio.h>
#include <stdlib.h>

int *GetSet(int *num) {
    int i;
    int *data;
    
    printf("Enter number of members: ");
    scanf("%d", num);
    
    data = (int*)malloc(*num * sizeof(int));
    
    for(i = 0; i < *num; i++) {
        printf("Enter member %d: ", i + 1);
        scanf("%d", &data[i]);
    }
    
    return data;
}

int main() {
    int *data, num;
    data = GetSet(&num);
    free(data);
    return 0;
}