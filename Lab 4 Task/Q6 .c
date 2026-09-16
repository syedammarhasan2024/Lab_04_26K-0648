# include <stdio.h>

int main(){
    float prevTotal;
    printf("Enter the current total cost of the pizza: ");
    scanf(" %f", &prevTotal);

    int hour;
    printf("Enter the hour of the day (0-23): ");
    scanf(" %d", &hour);

    if (hour >= 11 && hour <= 14){
        prevTotal = prevTotal - (prevTotal * 0.1);
        printf("Your discounted total is: %0.2f", prevTotal);
    }

    else{
        printf("This isnt a discounted hour, so your total remains %0.0f", prevTotal);
    }
}