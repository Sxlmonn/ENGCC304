#include <stdio.h>
#include <stdlib.h>

void GetMatrix(int **value, int *row, int *col) {
    int i, j;
    int *mat;
    
    printf("Enter row: ");
    scanf("%d", row);
    printf("Enter col: ");
    scanf("%d", col);
    
    mat = (int*)malloc((*row) * (*col) * sizeof(int));
    
    for(i = 0; i < *row; i++) {
        for(j = 0; j < *col; j++) {
            printf("Enter value [%d][%d]: ", i, j);
            scanf("%d", &mat[i * (*col) + j]);
        }
    }
    
    *value = mat;
}

int main() {
    int *data, m, n;
    GetMatrix(&data, &m, &n);
    free(data);
    return 0;
}