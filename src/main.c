#include <stdio.h>
#include <stdbool.h>

#define rateUSD 0.73;
#define rateGBP 0.54;
#define rateEUR 0.62;
#define rateLKR 225.41;

float CADToUSD(float);
float CADToGBP(float);
float CADToEUR(float);
float CADToLKR(float);

int main() {

    bool canExit = true;
    int userChoice = 0;
    float CAD = 0.0f;

    while (canExit)
    {
        printf("\n----------------|CURRENCY CONVERTER|----------------\n");
        printf("Welcome! Please enter your amount in CAD$: ");
        scanf("%f", &CAD);

        printf("Please enter the currency you would like to convert by number:\n");
        printf("1. USD$\n2. GBP£\n3. EUR€\n4. LKR(Rs)\n");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 0:
            printf("You have successfully log out!\n");
            canExit = false;
            break;
        case 1:
            printf("%0.2f CAD$ = %0.2f USD$\n", CAD, CADToUSD(CAD));
            break;
        case 2:
            printf("%0.2f CAD$ = %0.2f GBP£\n", CAD, CADToGBP(CAD));
            break;
        case 3:
            printf("%0.2f CAD$ = %0.2f EUR€\n", CAD, CADToEUR(CAD));
            break;
        case 4:
            printf("%0.2f CAD$ = %0.2f LKR(Rs)\n", CAD, CADToLKR(CAD));
            break;
        default:
            printf("That is not a valid choice\n");
            break;
        }
    }

    return 0;
}

float CADToUSD(float CAD)
{
    return CAD * rateUSD;
}

float CADToGBP(float CAD)
{
    return CAD * rateGBP;
}

float CADToEUR(float CAD)
{
    return CAD * rateEUR;
}

float CADToLKR(float CAD)
{
    return CAD * rateLKR;
}

