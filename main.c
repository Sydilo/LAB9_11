#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int min_value, max_value, min_row, min_col, max_row, max_col;

    printf("Введіть розмірність масиву: ");
    scanf("%d%d", &rows, &cols);

    int arr[rows][cols];

    printf("Введіть елементи масиву:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    min_value = max_value = arr[0][0];
    min_row = min_col = max_row = max_col = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] < min_value) {
                min_value = arr[i][j];
                min_row = i;
                min_col = j;
            }
            if (arr[i][j] > max_value) {
                max_value = arr[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    printf("Мінімальний елемент: %d, розташування: [%d, %d]\n", min_value, min_row, min_col);
    printf("Максимальний елемент: %d, розташування: [%d, %d]\n", max_value, max_row, max_col);

    return 0;
}
