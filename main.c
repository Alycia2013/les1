#include<stdio.h>

int vraag_cijfer() {
    int cijfer;
    printf("geef een cijfer: ");
    scanf("%d",  &cijfer);
    return cijfer;
}

void main() {
    int cijfer_1, cijfer_2;
    cijfer_1 = vraag_cijfer();
    cijfer_2 = vraag_cijfer();
    printf("de som is: %d\n", cijfer_1 + cijfer_2);
}