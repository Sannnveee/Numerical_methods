#include <stdio.h>
#include <math.h>

int main() {

    float x1 = 0, x2 = 0, x3 = 0, x4 = 0;
    float x1_new, x2_new, x3_new, x4_new;
    int i, max_iter = 25;
    float error;

    printf("Iter\t x1\t x2\t x3\t x4\n");

    for (i = 1; i <= max_iter; i++) {

        x1_new = (3 + 2*x2 + x3 + x4) / 10;
        x2_new = (15 + 2*x1_new + x3 + x4) / 10;
        x3_new = (27 + x1_new + x2_new + 2*x4) / 10;
        x4_new = (-9 + x1_new + x2_new + 2 * x3_new) / 10;
        
        if (fabs(x4_new) < 1e-4) x4_new = 0.0;

        printf("%2d\t%.4f\t%.4f\t%.4f\t%.4f\n", i, x1_new, x2_new, x3_new, x4_new);

        error = fabs(x1 - x1_new) + fabs(x2 - x2_new) + fabs(x3 - x3_new) + fabs(x4 - x4_new);

        if (error < 0.00001)
            break;

        x1 = x1_new;
        x2 = x2_new;
        x3 = x3_new;
        x4 = x4_new;
    }

    // Final result
    printf("\nThe final output using Gauss-Seidel method:\n");
    printf("\nx1 = %.4f\nx2 = %.4f\nx3 = %.4f\nx4 = %.4f\n", x1_new, x2_new, x3_new, x4_new);

    return 0;
}
