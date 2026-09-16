#include <stdio.h>

int main() {
    int size = 0;
    int amount = 0;
    int crustChoice = 0;
    int hour = 0;
    int deliveryChoice = 0;
    char cheeseChoice;
    char studentChoice;
    float total = 0.0;

    float baseCost = 0.0;
    float crustCost = 0.0;
    float cheeseCost = 0.0;
    float happyHourDiscount = 0.0;
    float studentDiscount = 0.0;
    float deliveryCost = 0.0;
    int hasFreeBread = 0;

    printf("Enter 1 for small pizza: \n"
           "Enter 2 for medium pizza: \n"
           "Enter 3 for large pizza: \n"
           "Enter a size option: ");
    scanf("%d", &size);   
    switch (size)
    {
    case 1:
        printf("Small pizza selected\n");
        break;
    case 2:
        printf("Medium pizza selected\n");
        break;
    case 3:
        printf("Large pizza selected\n");
        break;
    default:
        printf("Invalid size\n");
        break;
    }

    printf("\nEnter the amount of pizzas: ");
    scanf("%d", &amount);

    if (amount == 1) {
        baseCost = 8.0;
    } 
    
    else if (amount == 2) {
        baseCost = 15.0;
    } 
    
    else if (amount == 3) {
        baseCost = 21.0;
    } 
    
    else {
        printf("Invalid amount of pizzas.\n");
        return 1;
    }

    total = baseCost;

    printf("\nWhat type of crust do you prefer?");
    printf("\nPress 1 for regular, 2 for thin ($1 extra), 3 for stuffed ($2 extra): ");
    scanf("%d", &crustChoice);

    if (crustChoice == 2) {
        crustCost = 1.0 * amount;
    } 
    
    else if (crustChoice == 3) {
        crustCost = 2.0 * amount;
    }

    total += crustCost;

    if (amount == 3 && crustChoice == 3) {
        hasFreeBread = 1;
        printf("\nYou get free garlic bread!\n");
    }

    printf("\nDo you want extra cheese ($1.50 extra)?");
    printf("\nPress Y for yes or N for no: ");
    scanf(" %c", &cheeseChoice);

    if (cheeseChoice == 'y' || cheeseChoice == 'Y') {
        cheeseCost = 1.50 * amount;
        total += cheeseCost;
        printf("\nYour updated total is: $%.2f\n", total);
    } 
    
    else if (cheeseChoice == 'n' || cheeseChoice == 'N') {
        printf("\nYour total remains: $%.2f\n", total);
    } 
    
    else {
        printf("\nPlease enter a valid choice!\n");
    }

    printf("\nEnter the hour of the day (0-23): ");
    scanf("%d", &hour);

    if (hour >= 11 && hour <= 14) {
        happyHourDiscount = total * 0.10;
        total -= happyHourDiscount;
        printf("Discounted total: $%.2f\n", total);
    } 
    
    else {
        printf("This isn't a discounted hour, so your total remains: $%.2f\n", total);
    }

    printf("\nDo you have a student ID ($2 off)?");
    printf("\nPress Y for yes or N for no: ");
    scanf(" %c", &studentChoice);

    if (studentChoice == 'y' || studentChoice == 'Y') {
        studentDiscount = 2.0;
        total -= studentDiscount;
    }

    if (total < 0) {
        total = 0;
    }

    printf("\nDo you want pickup or delivery?");
    printf("\nPress 1 for pickup or 2 for delivery ($3 extra): ");
    scanf("%d", &deliveryChoice);

    if (deliveryChoice == 2) {
        deliveryCost = 3.0;
        total += deliveryCost;
        printf("\nYour updated total is: $%.2f\n", total);
    } 
    
    else if (deliveryChoice == 1) {
        printf("\nYour total remains: $%.2f\n", total);
    }

    printf("\n");
    printf("\n                  INVOICE                 ");
    printf("\n");
    if (size == 1) {
        printf("\n Pizza Size                   : Small");
    } 
    else if (size == 2) {
        printf("\n Pizza Size                   : Medium");
    } 
    else if (size == 3) {
        printf("\n Pizza Size                   : Large");
    }
    printf("\n Base Pizza Cost (%d pizza(s)) : $%.2f", amount, baseCost);

    if (crustCost > 0) {
        printf("\n Crust Upgrade                : $%.2f", crustCost);
    }
    if (cheeseCost > 0) {
        printf("\n Extra Cheese                 : $%.2f", cheeseCost);
    }
    if (hasFreeBread) {
        printf("\n Promotion                    : Free Garlic Bread");
    }
    if (happyHourDiscount > 0) {
        printf("\n Happy Hour Discount (10%%)    : -$%.2f", happyHourDiscount);
    }
    if (studentDiscount > 0) {
        printf("\n Student Discount             : -$%.2f", studentDiscount);
    }
    if (deliveryChoice == 2) {
        printf("\n Delivery Fee                 : $%.2f", deliveryCost);
    } else if (deliveryChoice == 1) {
        printf("\n Pickup or Delivery           : Pickup ($0.00)");
    }

    printf("\n");
    printf("\n FINAL PRICE                  : $%.2f", total);
    printf("\n");
    printf("\nThank you for your order!\n");

    return 0;
}