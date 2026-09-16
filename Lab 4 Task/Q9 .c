# include <stdio.h>

int main(){
    float prevTotal;
    printf("Enter the current total cost of the pizza: ");
    scanf(" %f", &prevTotal);

    int choice;
    printf("\nDo you want pick up or devlivery?");
    printf("\nPress 1 for pickup or 2 for delivery: ");
    scanf(" %d", &choice);

    if (choice == 2){
        prevTotal += 3;
        printf("\nYour updated total is: %0.1f", prevTotal);
    }

    else if (choice == 1){
        printf("\nYour total remains: %0.1f", prevTotal);
    }
}