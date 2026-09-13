#include <stdio.h>

int main() {

    float num;
    printf("Enter a floating point number\n");
    scanf("%f",&num);
    
    printf("With one decimal place: %.1f\n",num);
    printf("With three decimal places: %.3f\n",num);
    

    return 0;
}