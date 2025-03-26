#include <stdio.h>
#include <string.h>
#define TAX_RATE 0.18

int main() {
    char name[50], roomType[20], foodOption[20];
    int days;
    float roomFare = 0, foodCost = 0, total_Fare,totalFare, tax, finalBill;
    printf("Welcome to leela groups of hotels ");    
    printf("\nEnter your name: ");
    scanf("%49s", name);

    printf("Enter room type (Single/Double/Suite): ");
    scanf("%19s", roomType);

    printf("Enter number of days: ");
    scanf("%d", &days);

    if (strcmp(roomType, "Single") == 0) {
        roomFare = 1000.0;
    } else if (strcmp(roomType, "Double") == 0) {
        roomFare = 2000.0;
    } else if (strcmp(roomType, "Suite") == 0) {
        roomFare = 5000.0;
    } else {
        printf("Invalid room type, defaulting to Single room.\n");
        roomFare = 1000.0;
    }

    printf("Select food option (Veg/Non-Veg/No-Food): ");
    scanf("%19s", foodOption);

    if (strcmp(foodOption, "Veg") == 0) {
        foodCost = 700.0;
    } else if (strcmp(foodOption, "Non-Veg") == 0) {
        foodCost = 1500.0;
    } else if (strcmp(foodOption, "No-Food") == 0) {
        foodCost = 0.0;
    } else {
        printf("Invalid food option, defaulting to 'No-Food'.\n");
        foodCost = 0.0;
    }

    total_Fare = roomFare + foodCost;
   totalFare= total_Fare*days;
    tax = totalFare * TAX_RATE;
    finalBill = totalFare + tax;

    printf("\n--- Final Bill ---\n");
    printf("Name           : %s\n", name);
    printf("Room Type      : %s\n", roomType);
    printf("Food Option    : %s\n", foodOption);
    printf("Number of Days : %d\n", days);
    printf("Room Fare      : ₹%.2f\n", roomFare * days);
    printf("Food Cost      : ₹%.2f\n", foodCost * days);
    printf("Total Fare     : ₹%.2f\n", totalFare);
    printf("Tax (%.0f%%)    : ₹%.2f\n", TAX_RATE * 100, tax);
    printf("Final Bill     : ₹%.2f\n", finalBill);
    printf("THANK YOU AND VISIT AGAIN ");

    return 0;
}