/*CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY,
PRICE AND AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND
PRICE AS INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.*/

#include <stdio.h>

struct ITEM{
    char item_name[15];
    int quantity;
    float price;
    float amount;
}item_1;

void amount(struct ITEM item_1)
{
    printf("Enter the name of item\n");
    fgets(item_1.item_name,15,stdin);

    printf("Enter the quantity\n");
    scanf("%d", &item_1.quantity);

    printf("Enter the price\n");
    scanf("%f", &item_1.price);

    item_1.amount = item_1.quantity * item_1.price;

    printf("The amount is %.2f\n", item_1.amount);
}

int main()
{
    amount(item_1);
    return 0;
}