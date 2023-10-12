#include <stdio.h>

// Function Prototypes
float calculateTotalCost(int itemNo, int quantity);
void printDetails(int itemNo, int quantity, float totalCost);

int main(void) {
    // Variable Initialization
    int itemNo, quantity;
    float totalCost;

    // Prompt and get the required information from the user
    printf("Enter Item Number: ");
    scanf("%d", &itemNo);

    printf("Enter Quantity Purchased: ");
    scanf("%d", &quantity);

    totalCost = calculateTotalCost(itemNo, quantity); // Calculate Total Cost
    printDetails(itemNo, quantity, totalCost);        // Display Results

    return 0;
}

// Function to calculate total cost
float calculateTotalCost(int itemNo, int quantity) {
    switch (itemNo) {
        case 1:
            return 100.00 * quantity;
        case 2:
            return 200.00 * quantity;
        case 3:
            return 300.00 * quantity;
        default:
            return 0.0; // Return 0 for unknown item numbers
    }
}

// Function to print the results back to the screen
void printDetails(int itemNo, int quantity, float totalCost) {
    // Display Results
    printf("\n================== RESULTS ==================\n\n"
           "Item Number: %d\n"
           "Quantity: %d\n"
           "Total Cost: %.2f\n\n",
           itemNo, quantity, totalCost);
}
