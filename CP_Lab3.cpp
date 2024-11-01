#include <stdio.h>
#include <math.h>

// Define the function f(x) = e^x
double f(double x) {
    return exp(x);
}

// Trapezoidal rule function
double trapezoidal(double a, double b, int n) {
    double h = (b - a) / n; // width of each trapezoid
    double sum = (f(a) + f(b)) / 2.0;
    
    for (int i = 1; i < n; i++) {
        sum += f(a + i * h); // sum f(x_i) for i = 1 to n-1
    }
    
    return h * sum; // final area
}

int main() {
    double a, b;
    int n;
    
    printf("Enter the lower limit a: ");
    scanf("%lf", &a);
    printf("Enter the upper limit b: ");
    scanf("%lf", &b);
    printf("Enter the number of intervals n: ");
    scanf("%d", &n);
    
    double area = trapezoidal(a, b, n);
    printf("The area under the curve from %f to %f is approximately: %f\n", a, b, area);
    
    return 0;
}

