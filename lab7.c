/*
  Студент: Сорокин Ммксим Олегович
  Группа : ПИ 1-1
*/
#include <stdio.h>
#define MAX_SIZE 100

int main(void)
{
    int a[MAX_SIZE], b[MAX_SIZE], n;
    printf("Enter n (1..100): ");
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }
    if (n < 1 || n > MAX_SIZE) {
        printf("Size error\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        if (scanf("%d", &a[i]) != 1) {
            printf("Input error\n");
            return 1;
        }
        if (a[i] < -1000 || a[i] > 1000) {
            printf("Value error\n");
            return 1;
        }
    }

    int replaced = 0;        /* сколько элементов заменили */
    long long sumB = 0;      /* сумма элементов массива b */
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            b[i] = 0;
            replaced++;
        } else {
            b[i] = a[i];
        }
        sumB += b[i];
    }

    printf("a:");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\nb:");
    for (int i = 0; i < n; i++) {
        printf(" %d", b[i]);
    }
    printf("\nReplaced = %d\n", replaced);
    printf("Sum b = %lld\n", sumB);
    return 0;
}
