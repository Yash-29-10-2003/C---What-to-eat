#include<stdio.h>
int main()
{
    int choice;
    printf("Enter the number of the dish that you want to eat in the range 1-5 : ");
    scanf("%d" , &choice);
    switch (choice) 
    {
        case 1 :
            printf("Food Item - Pasta\nPrice - Rs. 179");
            break;
        case 2 :
            printf("Food Item - Burger\nPrice - Rs. 129");
            break;
        case 3 :
            printf("Food Item - Pizza\nPrice - Rs. 239");
            break;
        case 4 :
            printf("Food Item - Sandwich\nPrice - Rs. 149");
            break;
        case 5 :
            printf("Food Item - French Fries\nPrice - Rs. 99");
            break;
        default:
            printf("You have chosen a number out of the list of dishes . Please enter a number ranging 1-5 only .");
    }
    return 0;
}