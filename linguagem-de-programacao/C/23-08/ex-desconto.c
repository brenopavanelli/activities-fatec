#include <stdio.h>

int main() {

    float sal;
    float imposto;

    scanf("%f", &sal);

    if (sal < 1212) {
        imposto = 0.075;
    }
    else if (sal >= 1212.01 && sal <= 2427.35) {
        imposto = 0.09;
    }
    else if (sal >= 2427.36 && sal <= 3641.04) {
        imposto = 0.12;
    }
    else if (sal >= 3641.05 && sal <= 7087.22) {
        imposto = 0.14;
    }
    else {
        imposto = 929.29;
    }

    printf("%f", sal * imposto;

    return 0;
}
