#include <stdio.h>

int vraag_cijfer()
{
    int cijfer;
    printf("geef een cijfer: ");
    scanf(" %d", &cijfer);
    return cijfer;
}

int main()
{
    int cijfer_1, cijfer_2;
    char bewerking;
    char nog_eens='j';
    while (nog_eens == 'j' || nog_eens == 'J') {
        cijfer_1 = vraag_cijfer();
        cijfer_2 = vraag_cijfer();
        printf("welke bewerking wil je?: ");
        scanf(" %c", &bewerking);

        int uitkomst;
        switch (bewerking) {
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
        printf("de uitomst is: %d\n", uitkomst);
        printf("wil nog eens? [j/n]: ");
        scanf(" %c", &nog_eens);
    }
    return 0;  
} 

