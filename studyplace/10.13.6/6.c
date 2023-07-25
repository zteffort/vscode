#include <stdio.h>
#define N 5

void reverse(double a[], int n);
void show_array(const double a[], int n);

int main(void)
{
    double array[N] = {1.32, 4.5, 3.6, 2.4, 5.6};

    printf("Array:\n");
    show_array(array, N);
    reverse(array, N);
    printf("After reversing:\n");
    show_array(array, N);

    return 0;
}

void reverse(double a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        double t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
    return;
}

void show_array(const double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%-8g", a[i]);
    }
    putchar('\n');
}
