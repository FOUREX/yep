#include <stdio.h>
#include <math.h>


// Очистка буфера stdin, fflush(stdin) не працює
void flush() {
    while (getchar() != '\n') { }
}


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
    char months[12][9] =
    {
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
    };
    int month;


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


    input = getc(stdin);


    switch (input) {
        case 'a':
            printf("Absent");
            break;
        case 'b':
            printf("Burbon");
            break;
        case 'c':
            printf("Coca-Cola");
            break;
        case 'A':
            printf("Absent");
            break;
        case 'B':
            printf("Burbon");
            break;
        case 'C':
            printf("Coca-Cola");
            break;
        default:
            printf("Drink not found!");
    }
}


int main() {
    char input;


    printf("Type number (1 - 3): ");
    input = getc(stdin);
    flush();


    switch (input) {
        case '1':
            yep_1();
            break;
        case '2':
            yep_2();
            break;
        case '3':
            yep_3();
            break;
        default:
            printf("Number from 1 to 3! NOT %c!", input);
    
    getc();
    }
}
