# include <stdio.h>

int main(){
    int prevTotal;
    printf("Enter the current total cost of the pizza: ");
    scanf("%d", &prevTotal);

    int choice;
    printf("\nWhat type of crust do you prefer?");
    printf("\nPress 1 for regular, 2 for thin, and 3 for stuffed: ");
    scanf("%d", &choice);

    if (choice == 1){
        printf("\nYour total is $%d", prevTotal);
    }
    else if (choice == 2){
        prevTotal += 1;
        printf("\nYour total is $%d", prevTotal);
    }
    else if (choice == 3){
        prevTotal += 2;
        printf("\nYour total is $%d", prevTotal);
    }
    
}