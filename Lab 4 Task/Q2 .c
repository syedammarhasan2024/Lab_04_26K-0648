# include <stdio.h>
int main()
{
    int amount;
    printf("Enter the amount of pizzas: ");
    scanf("%d", &amount);

    if (amount > 1){
        printf("Check our multi-pizza deals! ");
    }

    else{
        printf("Your total is: 8$ ");
    }
}