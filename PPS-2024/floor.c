#include <stdio.h>
#include <math.h>

int main() {
    double num, natural_log, base10_log;

    // Taking user input
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Calculating natural log and base-10 log
    natural_log = log(num);      // Natural log (base e)
    base10_log = log10(num);     // Base-10 log

    // Displaying results
    printf("Natural Log (ln) of %.2lf = %.2lf\n", num, natural_log);
    printf("Base-10 Log (log10) of %.2lf = %.2lf\n", num, base10_log);

    return 0;
}
