                                                                        // FRACTIONAL KNAPSACK//
//Aim: To implement Fractional Knapsack using greedy method to maximize profit.

#include<stdio.h>

// Structure to store item details
struct Item
{
    int weight;
    int profit;
    float ppw;   // profit per weight
};

// Function to sort items based on profit per weight (descending)
void sort(struct Item items[], int n)
{
    struct Item temp;

    // Bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            // Swap if next item has higher ppw
            if(items[j].ppw < items[j + 1].ppw)
            {
                temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, capacity;

    // Taking number of items
    printf("Enter number of items: ");
    scanf("%d", &n);

    // Taking knapsack capacity
    printf("Enter the capacity: ");
    scanf("%d", &capacity);

    struct Item items[n];

    // Input weight and profit
    printf("Enter weight and profit of items:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &items[i].weight, &items[i].profit);

        // Calculate profit per weight
        items[i].ppw = (float)items[i].profit / items[i].weight;
    }

    // Sort items by profit per weight
    sort(items, n);

    float totalprofit = 0;

    // Applying fractional knapsack logic
    for(int i = 0; i < n; i++)
    {
        // If item can be fully taken
        if (items[i].weight <= capacity)
        {
            capacity -= items[i].weight;
            totalprofit += items[i].profit;
        }
        else
        {
            // Take fractional part
            totalprofit += items[i].ppw * capacity;
            break;
        }
    }

    // Display total profit
    printf("Total profit = %.2f", totalprofit);

    return 0;
}
