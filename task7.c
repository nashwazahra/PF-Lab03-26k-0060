#include <stdio.h>

int main() {

    char c[50], C[50], a[50], G[50];
    int P;

    printf("Enter your city: ");
    scanf("%s", c);

    printf("Enter your country: ");
    scanf("%s", C);

    printf("Enter your population: ");
    scanf("%d", &P);

    printf("Enter your area: ");
    scanf("%s", a);

    printf("Enter your grade: ");
    scanf("%s", G);

    printf("You live in %s, %s\nPopulation: %d\nArea: %s\nGrade: %s",
           c, C, P, a, G);

    return 0;
}