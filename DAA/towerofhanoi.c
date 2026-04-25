
//Aim: To solve Tower of Hanoi problem using recursion.//

#include <stdio.h>

// Function to perform Tower of Hanoi
void towerofhanoi(int n, char S, char A, char D)
{
    // Base condition: only one disk
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", S, D);
        return;
    }

    // Move n-1 disks from Source to Auxiliary
    towerofhanoi(n - 1, S, D, A);

    // Move nth disk from Source to Destination
    printf("Move disk %d from %c to %c\n", n, S, D);

    // Move n-1 disks from Auxiliary to Destination
    towerofhanoi(n - 1, A, S, D);
}

int main()
{
    int n;

    // Taking input
    printf("Enter number of disks: ");
    scanf("%d", &n);

    // Display moves
    printf("\nRequired moves:\n");

    // Function call
    towerofhanoi(n, 'S', 'A', 'D');

    return 0;
}
