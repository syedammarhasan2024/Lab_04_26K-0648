# include <stdio.h>

int main(){
    float prevTotal;
    printf("Enter the current total cost of the pizza: ");
    scanf(" %f", &prevTotal);

    char StudID;
    printf("\nDo you have a student ID?");
    printf("\nPress Y for yes or N for no: ");
    scanf(" %c", &StudID);

    if (StudID == 'y' || StudID == 'Y'){
        prevTotal -= 2;
    }

    if (prevTotal < 0){
        prevTotal = 0;
    }

    printf("\nYour total is: %0.1f", prevTotal);
}