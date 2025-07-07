#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// Given data points
const double x[] = {0.00, 0.25, 0.50, 0.75, 1.00};
const double y[] = {1.0000, 0.9896, 0.9589, 0.9089, 0.8415};

// Function to compute volume using Simpson's 1/3 rule
double simpsons_rule(int n) {
    double h = x[1] - x[0]; // Assuming uniform spacing
    double sum = y[0]*y[0] + y[n-1]*y[n-1]; // First and last terms
    
    // Odd-indexed terms (multiplied by 4)
    for(int i = 1; i < n-1; i += 2) {
        sum += 4 * y[i] * y[i];
    }
    
    // Even-indexed terms (multiplied by 2)
    for(int i = 2; i < n-1; i += 2) {
        sum += 2 * y[i] * y[i];
    }
    
    return (PI * h * sum) / 3;
}

int main() {
    int n = sizeof(x) / sizeof(x[0]); // Number of data points
    
    if(n != sizeof(y) / sizeof(y[0])) {
        printf("Error: x and y arrays must have same length.\n");
        return 1;
    }
    
    // Simpson's rule requires an even number of intervals (odd number of points)
    if((n-1) % 2 != 0) {
        printf("Error: Simpson's rule requires an odd number of points.\n");
        return 1;
    }
    
    double volume = simpsons_rule(n);
    
    printf("Estimated volume of revolution: %.4f\n", volume);
    
    return 0;
}
