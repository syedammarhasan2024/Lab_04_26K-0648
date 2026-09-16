# include <stdio.h>

int main(){
    float prevTotal;
    printf("Enter the current total cost of the pizza: ");
    scanf(" %f", &prevTotal);

    char choice;
    printf("\nDo you want extra cheese?");
    printf("\nPress Y for yes or N for no: ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y'){
        prevTotal += 1.5;
        printf("\nYour updated total is: %0.1f", prevTotal);
    }

    else if (choice == 'n' || choice == 'N'){
        printf("\nYour total remains: %0.1f", prevTotal);
    }

    else{
        printf("\nPlease enter a valid choice! ");
    }
}