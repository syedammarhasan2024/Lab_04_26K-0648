# include <stdio.h>
int main()
{
    int amount;
    printf("Enter the amount of pizzas: ");
    scanf("%d", &amount);

    int choice;
    printf("\nWhat type of crust do you prefer?");
    printf("\nPress 1 for regular, 2 for thin, and 3 for stuffed: ");
    scanf("%d", &choice);

    if (amount ==3 && choice == 3){
        printf("\nYou get free garlic bread! ");
    }

    else {
        printf("\nThank you for your order");
    }
}