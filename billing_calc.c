#include <stdio.h>

// Function Prototypes
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);

int main(void) {
    // Variable Initialization
    int noOfGuests;
    float chargePerGuest, discount, totalBill;

    // Prompt and get the required information from the user
    printf("Enter number of guests: ");
    scanf("%d", &noOfGuests);

    printf("Enter charge per guest: ");
    scanf("%f", &chargePerGuest);

    discount = getDiscountPrice(noOfGuests, chargePerGuest); // Calculate Discount
    totalBill = getAmount(noOfGuests, chargePerGuest, discount); // Calculate Total Bill

    // Display the results to the user
    printf("Discount: %.2f\n", discount);
    printf("Amount to be paid: %.2f\n", totalBill);

    return 0;
}

float getDiscountPrice(int noOfGuests, float chargePerGuest) {
    if (noOfGuests > 200) {
        // Number of guests > 200: They're eligible for the discount
        return 0.10 * (noOfGuests * chargePerGuest); // 10% discount
    }
    return 0;
}

float getAmount(int noOfGuests, float chargePerGuest, float discount) {
    return (noOfGuests * chargePerGuest) - discount; // Calculate the total bill
}
