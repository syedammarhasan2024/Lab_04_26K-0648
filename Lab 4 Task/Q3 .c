# include <stdio.h>
int main()
{
    int amount;
    printf("Enter the amount of pizzas: ");
    scanf("%d", &amount);

    if (amount == 1){
        printf("Your pizza costs $8! ");
    }

    else if (amount == 2){
        printf("A combo of 2 pizzas costs $15! ");
    }

    else if (amount == 3){
        printf("A package of 3 pizzas costs $21! ");

    }
}