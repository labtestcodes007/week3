#include <stdio.h>

int main(){
    
    int num;
    printf("\nEnter the month number:");
    scanf("%d",&num);

    switch(num){
        case 1:
            printf("31 days\n");
        case 2:
            printf("29 days\n");
        case 3:
            printf("31 days\n");
        case 4:
            printf("30 days\n");
        case 5:
            printf("31 days\n");
        case 6:
            printf("30 days\n");
        case 7:
            printf("31 days\n");
        case 8:
            printf("31 days\n");
        case 9:
            printf("30 days\n");
        case 10:
            printf("31 days\n");
        case 11:
            printf("30 days\n");
        case 12:
            printf("31 days\n");

    }  
    return 0;
}
