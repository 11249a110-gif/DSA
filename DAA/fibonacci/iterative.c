                                                                   //fibonacci in itertive//
    //aim: To generate Fibonacci series up to n terms and display the nth term.//
#include <stdio.h>
int main() 
{
    int n;
    int a = 0, b = 1, c;
    printf("Enter the number of terms (n): ");
    // Check for valid input
    if (scanf("%d", &n) != 1 || n <= 0) 
    { 
        printf("Invalid input. Please enter a positive integer.\n"); 
        return 0; 
    } 
    printf("Fibonacci Series: ");
    // Print first term
    if (n >= 1) 
        printf("%d ", a);
    // Print second term
    if (n >= 2) 
        printf("%d ", b);   // <-- fixed semicolon
    // Generate remaining terms
    for (int i = 3; i <= n; i++) 
    { 
        c = a + b; 
        printf("%d ", c); 
        a = b; 
        b = c; 
    }         
    // Print nth term
    if (n == 1) 
        printf("\nFibonacci term %d = %d\n", n, a); 
    else 
        printf("\nFibonacci term %d = %d\n", n, b); 
    return 0;
}
