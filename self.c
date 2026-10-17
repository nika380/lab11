// Захарова Вероника Сергеевна Пи1-1
#include <stdio.h>

/* Подсчитывает элементы, строго большие limit */
int count_above(const int a[], int n, int limit)
{
    int count = 0;

    if (n <= 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > limit) {
            count++;
        }
    }

    return count;
}

int main(void)
{
    int a[] = {4, -2, 7, 0};
    int n = sizeof(a) / sizeof(a[0]);

    printf("n=4, limit=0: %d\n",
           count_above(a, n, 0));

    printf("n=4, limit=7: %d\n",
           count_above(a, n, 7));

    printf("n=2, limit=-3: %d\n",
           count_above(a, 2, -3));

    printf("n=0, limit=0: %d\n",
           count_above(a, 0, 0));

    return 0;
}
