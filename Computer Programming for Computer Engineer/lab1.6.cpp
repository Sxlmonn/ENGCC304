#include <stdio.h>
#include <stdlib.h>

int *GetMatrix(int *row, int *col) {
    int i, j;
    int *value;
    
    printf("Enter number of rows: ");
    scanf("%d", row);
    printf("Enter number of columns: ");
    scanf("%d", col);
    
    value = (int*)malloc((*row) * (*col) * sizeof(int));
    
    for(i = 0; i < *row; i++) {
        for(j = 0; j < *col; j++) {
            printf("Enter value [%d][%d]: ", i, j);
            scanf("%d", &value[i * (*col) + j]);
        }
    }
    
    return value;
}

int main() {
    int *data, m, n;
    data = GetMatrix(&m, &n);
    free(data);
    return 0;
}