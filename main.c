#include <stdio.h>

double vraag_cijfer()
{
    double cijfer;
    printf("geef een cijfer: ");
    scanf(" %lf", &cijfer);
    return cijfer;
}

int main()
{
    double cijfer_1, cijfer_2;
    char bewerking;
    char nog_eens = 'j';
    char weet_je_het_zeker = 'n';
    while (nog_eens == 'j' || weet_je_het_zeker == 'n')
    {
        cijfer_1 = vraag_cijfer();
        cijfer_2 = vraag_cijfer();
        printf("welke bewerking wil je?: ");
        scanf(" %c", &bewerking);

        double uitkomst;
        switch (bewerking)
        {
        case '*':
            uitkomst = cijfer_1 * cijfer_2;
            break;
        case '+':
            uitkomst = cijfer_1 + cijfer_2;
            break;
        case '/':
            uitkomst = cijfer_1 / cijfer_2;
            break;
        case '-':
            uitkomst = cijfer_1 - cijfer_2;
            break;
        default:
            printf("sorry ik begrijp je niet\n");
            return 1;
        }
        printf("de uitomst is: %lf\n", uitkomst);
        printf("wil nog eens? [j/n]: ");
        scanf(" %c", &nog_eens);
        if (nog_eens == 'n') {
            printf("weet je het zeker? [j/n]");
            scanf(" %c", &weet_je_het_zeker);
        }
    }
    return 0;
}