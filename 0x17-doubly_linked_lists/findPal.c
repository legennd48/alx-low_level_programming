#include <stdio.h>

/* Function to check if a number is a palindrome */
int isPalindrome(int num)
{
    int original = num;
    int reverse = 0;
    while (num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return original == reverse;
}

int main()
{
    int maxPalindrome = 0;

    /* Loop through all possible products of two 3-digit numbers */
    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            int product = i * j;

            /* Check if the product is a palindrome and greater than the current maximum */
            if (isPalindrome(product) && product > maxPalindrome)
	    {
                maxPalindrome = product;
            }
        }
    }

    printf("The highest palindrome formed from the product of two 3-digit numbers is: %d\n", maxPalindrome);

    return 0;
}
