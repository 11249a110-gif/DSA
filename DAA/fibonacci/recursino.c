                                                                 //Fibonacci term Recursion//
//Aim: To find the nth Fibonacci term using recursion.//

#include<stdio.h>
// Function to calculate Fibonacci using recursion
int fib(int n) 
{   
    // Base condition
    if (n <= 1) 
    { 
        return n; 
    }   
    // Recursive call
    return fib(n - 1) + fib(n - 2); 
}
int main()  
{ 
    int n;
    // Taking input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);
    // Checking for valid input
    if (n <= 0) 
    { 
        printf("Invalid input\n"); 
        return 1; 
    } 
    // Displaying result
    printf("\nNth Fibonacci term = %d\n", fib(n)); 
    return 0; 
}
