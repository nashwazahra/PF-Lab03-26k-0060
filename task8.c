#include <stdio.h>

int main() {

    int a,b;

    printf("enter a and b\n");
    scanf("%d %d", &a, &b);

    int quotient = a/b;
    int remainder = a%b;

    printf("the quotient is %d\nthe remainder is%d",quotient, remainder);

    return 0;
}