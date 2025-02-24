#include <stdio.h>

int main(){
    int num;
    printf("\nEnter score:");
    scanf("%d",&num);

    if (90 <= num <= 100)
        printf("A");
    else if (80 <= num <=89)
        printf("B");
    else if (70 <= num <=79)
        printf("C");
    else if (60 <= num <=69)
        printf("D");
    else if (50 <= num <=59)
        printf("E");
    else if (0 <= num <=49)
        printf("F");
    
    return 0;
}
