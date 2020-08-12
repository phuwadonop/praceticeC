#include<stdio.h>
int main() {

    long long int number;

    scanf("%lld", &number);

    int div = 2, maxFact;

    while (1) {
        if (number % div != 0) {
            div += 1;
        }
        else {
            maxFact = number;
            number /= div;
            if (number == 1) {
                printf("%d", maxFact); break;
            }
        }
    }
}
