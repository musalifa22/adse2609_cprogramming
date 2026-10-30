
#include <stdio.h>

int main() {
    int chipsQty = 2;
    int burgerQty = 1;
    int juiceQty = 3;

    float chipsPrice = 150.00;
    float burgerPrice = 350.00;
    float juicePrice = 100.00;

    float chipsTotal, burgerTotal, juiceTotal;
    float grandTotal;

    // Calculate item totals
    chipsTotal = chipsQty * chipsPrice;
    burgerTotal = burgerQty * burgerPrice;
    juiceTotal = juiceQty * juicePrice;

    // Calculate grand total
    grandTotal = chipsTotal + burgerTotal + juiceTotal;

    // Display restaurant bill
    printf("\n=========== RESTAURANT BILL ===========\n");

    printf("%-15s %8s %12s %12s\n",
           "Item", "Quantity", "Unit Price", "Total Price");

    printf("--------------------------------------------------\n");

    printf("%-15s %8d %12.2f %12.2f\n",
           "Chips", chipsQty, chipsPrice, chipsTotal);

    printf("%-15s %8d %12.2f %12.2f\n",
           "Beef burger", burgerQty, burgerPrice, burgerTotal);

    printf("%-15s %8d %12.2f %12.2f\n",
           "Fresh juice", juiceQty, juicePrice, juiceTotal);

    printf("--------------------------------------------------\n");

    printf("%-39s %12.2f\n", "Grand Total:", grandTotal);

    return 0;
}
