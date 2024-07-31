#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Take card number (cc) from user
    long card = get_long("Card Number: ");

    // Copy to placeholder integer
    long cc = card;

    // Initialise counter = 0
    int counter = 0;
    int n = 0;
    int o = 0;
    int p = 0;

    // Perform checksum validation

    int a = cc % 10;
    cc = cc / 10;
    counter ++;
    int b = cc % 10;
    cc = cc / 10;
    counter ++;
    int c = cc % 10;
    cc = cc / 10;
    counter ++;
    int d = cc % 10;
    cc = cc / 10;
    counter ++;
    int e = cc % 10;
    cc = cc / 10;
    counter ++;
    int f = cc % 10;
    cc = cc / 10;
    counter ++;
    int g = cc % 10;
    cc = cc / 10;
    counter ++;
    int h = cc % 10;
    cc = cc / 10;
    counter ++;
    int i = cc % 10;
    cc = cc / 10;
    counter ++;
    int j = cc % 10;
    cc = cc / 10;
    counter ++;
    int k = cc % 10;
    cc = cc / 10;
    counter ++;
    int l = cc % 10;
    cc = cc / 10;
    counter ++;
    int m = cc % 10;
    cc = cc/ 10;
    counter ++;
    if(cc > 9)
    {
        n = cc % 10;
        cc = cc / 10;
        counter ++;
    }
    if(cc > 9)
    {
        o = cc % 10;
        cc = cc / 10;
        counter ++;
    }
    if(cc > 9)
    {
        p = cc % 10;
        cc = cc / 10;
        counter ++;
    }
    else if(cc < 10 && cc > 0)
    {
        p = cc;
        counter ++;
    }
    int producta;
    if(n > 0 && p > 0)
    {
        producta = b + d + f + h + j + l + n + p;
    }
    else if(n > 0)
    {
        producta = b + d + f + h + j + l + n;
    }
    else
    {
        producta = b + d + f + h + j + l;
    }
    printf("Digit Count: %i\nProduct A: %i\n", counter, producta);
}



        // cc % 10 to find last digit and save to int
        // cc * .1 to reduce by order of magnitude if cc > 9
        // +1 counter
        // Do while cc > 10 (maybe a different loop?)

        // Multiply every second digit of cc by 2, starting with the second to last position
        // If any product > 9, take modulo 10 of it instead, and also record a 1
        // Add sum of results to sum of remaining digits from cc
        // If sum % 10 = 0, card is potentially valid, proceed to identification

    // Identify card type
        // Check VISA parameters
            // Is digit counter 13 or 16?
            // Does first digit = 4? (digit 13 or 16 depending)
        // Check AMEX parameters
            // Is digit counter 15?
            // Does digit 15 = 3?
            // Does digit 14 = 4 or 7?
        // Check MASTERCARD parameters
            // Is digit counter 16?
            // Does digit 16 = 5?
            // Does digit 15 = 1,2,3,4 or 5?

    // Print result

