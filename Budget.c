#include <stdio.h>

int main() {
    // Variable declarations
    float savingsGoal, currentIncome, savingRate, monthlySavings, monthlyExpenses;
    int months = 0;
    float totalSaved = 0; // Variable to track the total amount saved over time

    // Input: Savings Goal
    printf("Enter your savings goal: ");
    scanf("%f", &savingsGoal);

    // Input: Current Income
    printf("Enter your current monthly income: ");
    scanf("%f", &currentIncome);

    // Input: Saving Plan (as a percentage of income)
    printf("What percentage of your income do you plan to save each month? ");
    scanf("%f", &savingRate);

    // Input: Monthly Expenses
    printf("Enter your estimated monthly expenses: ");
    scanf("%f", &monthlyExpenses);

    // Calculate monthly savings
    monthlySavings = (savingRate / 100) * currentIncome;

    // Check if monthly savings is greater than 0
    if (monthlySavings <= 0) {
        printf("Invalid savings rate or income. Please enter positive values.\n");
        return 1;
    }

    // Calculate the number of months required to reach the savings goal
    while (totalSaved < savingsGoal) {
        totalSaved += monthlySavings; // Add monthly savings
        totalSaved -= monthlyExpenses; // Subtract monthly expenses

        // Check if savings are less than expenses and savings goal is not yet met
        if (monthlySavings < monthlyExpenses && totalSaved < savingsGoal) {
            printf("At your current saving rate and expenses, you are saving less than you spend each month. It will take a very long time to reach your savings goal.\n");
            break; // Optional: You can choose to break the loop or let it continue
        }

        months++;
    }

    // Output: Number of months to reach the savings goal
    if (totalSaved >= savingsGoal) {
        printf("It will take you %d month(s) to save for your goal.\n", months);
    } else {
        printf("Your current saving rate and expenses will not allow you to reach your goal in a reasonable time frame.\n");
    }

    return 0;
}