// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage
// SP > CP => Profit , CP > SP => Loss
#include<stdio.h>
int main()
{
    float input_SP , input_CP;
    printf("Enter Selling Price and Cost Price :");
    scanf("%f %f", &input_SP,&input_CP);

    if(input_SP > input_CP){
        printf("Profit = %f", (input_SP - input_CP)/input_CP * 100);
    } 
    else if(input_CP > input_SP)
    {
        printf("Loss = %f",(input_CP - input_SP)/input_CP * 100);
    }
    else
    {
        printf("Neither Profit nor loss");
    }
    

    return 0;
}