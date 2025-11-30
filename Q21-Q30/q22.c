// Q22 (Conditional Statements)
// Write a program to find profit or loss percentage given cost price and selling price.
// Sample:
// Input: 1000 1200
// Output: Profit 20%

#include <stdio.h>

int main() {
    float costPrice, sellingPrice;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        float profitPercent = (profit / costPrice) * 100;
        printf("Profit %.0f%%", profitPercent);
    } else if (costPrice > sellingPrice) {
        float loss = costPrice - sellingPrice;
        float lossPercent = (loss / costPrice) * 100;
        printf("Loss %.0f%%", lossPercent);
    } else {
        printf("No Profit No Loss");
    }

    return 0;
}
