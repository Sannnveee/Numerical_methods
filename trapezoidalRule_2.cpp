#include <stdio.h>

// Given data points
const double x[] = {7.47, 7.48, 7.49, 7.50, 7.51, 7.52};
const double fx[] = {1.93, 1.95, 1.98, 2.01, 2.03, 2.06};

// Function to compute area using Trapezoidal rule
double trapezoidal_rule(int n) {
    double h = x[1] - x[0]; // Assuming uniform spacing
    double sum = fx[0] + fx[n-1];
    
    for(int i = 1; i < n-1; i++) {
        sum += 2 * fx[i];
    }
    
    return (h * sum) / 2;
}

int main() {
    int n = sizeof(x) / sizeof(x[0]); // Number of data points
    
    if(n != sizeof(fx) / sizeof(fx[0])) {
        printf("Error: x and f(x) arrays must have same length.\n");
        return 1;
    }
    
    double area = trapezoidal_rule(n);
    
    printf("Area under the curve from x=7.47 to x=7.52 is: \n%.4f\n", area);
    
    return 0;
}