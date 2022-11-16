#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void yep_1() {
    float x, y;

    printf("Type number x: ");
    scanf("%f", &x);
    
    if (x < 87.4) {
        y = ((pow(x, 2) - 3 * x) / x) + (x / (pow(x, 2) - 3 * x));
    }
    else {
        y = pow(x, 2) + ((3 * x - 2) / (3 * x + 2));
    }

    printf("Result: %f", y);
}


void yep_2() {
    int month;
    char months[12][9] =
    {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    printf("Type month number: ");
    scanf("%d", &month);

    if (month > 0 && month < 13) {
        printf("%s", months[month - 1]);
    }
    else {
        printf("There are only 12 months in a year!");
    }
}


void yep_3() {
    char input;

    printf("Type letter: ");
    input = getc(stdin);

    switch (input) {
        case 'A':
        case 'a':
            printf("Absent");
            break;
        case 'B':
        case 'b':
            printf("Burbon");
            break;
        case 'C':
        case 'c':
            printf("Coca-Cola");
            break;
        default:
            printf("Drink not found!");
    }
}


int main() {
    int input;

    printf("Type number (1 - 3): ");
    scanf("%d", &input);
    fflush(stdin);

    switch (input) {
        case 1:
            yep_1();
            break;
        case 2:
            yep_2();
            break;
        case 3:
            yep_3();
            break;
        default:
            printf("Number from 1 to 3! NOT %d!", input);
    }

    printf("\n");
    system("pause");
}
