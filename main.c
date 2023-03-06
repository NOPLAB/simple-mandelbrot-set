#include<stdio.h>
#include<complex.h>
#include<stdbool.h>

bool mandelbrot_set(float complex c) {
    float complex z = 0 + 0 * I;
    for (size_t i = 0; i < 20; i++)
    {
        if (cabs(z) > 2.0)
        {
            return false;
        }
        z = z * z + c;
    }
    return true;
}

int main() {
    float x = -2, y = -2;
    int n = 50;

    for (int i = n * -1; i < n; i++)
    {
        for (int j = n * -1; j < n; j++)
        {
            float complex c = ((float)i / n) + ((float)j / n) * I;
            if (mandelbrot_set(c))
            {
                printf("+");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}