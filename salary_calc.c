#include <stdio.h>

// Function Prototypes
float calculateIncrement(float salary, int noOfYearsWorked);
float calculateTotalSalary(float salary, float increment);

int main() {
    // Variable Initialization
    float salary, increment, totalSalary;
    int noOfYearsWorked;

    // Prompt and get user input
    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter years worked: ");
    scanf("%d", &noOfYearsWorked);

    increment = calculateIncrement(salary, noOfYearsWorked); // Calculate Increment
    totalSalary = calculateTotalSalary(salary, increment);  // Calculate Total Salary

    // Display the results to the user
    printf("Increment: %.2f\n", increment);
    printf("Total salary: %.2f\n", totalSalary);

    return 0;
}

// Function to calculate the increment
float calculateIncrement(float salary, int noOfYearsWorked) {
    if (noOfYearsWorked > 2) {
        return 0.10 * salary; // 10% increment
    }
    return 0;
}

// Function to calculate the total salary
float calculateTotalSalary(float salary, float increment) {
    return salary + increment;
}
