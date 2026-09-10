# include <stdio.h>
int main()
{
    int size;
    printf("Enter a size option: \n"
            "Enter 1 for small pizza: \n"
            "Enter 2 for medium pizza: \n"
            "Enter 3 for large pizza: \n");
    scanf("%d", &size);   
    switch (size)
    {
    case 1:
        printf("Small pizza");
        break;
    case 2:
        printf("Medium pizza");
        break;
    case 3:
        printf("Large pizza");
        break;
    default:
        printf("Invalid size");
        break;
    }
}