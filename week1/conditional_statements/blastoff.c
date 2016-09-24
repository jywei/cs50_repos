/*************************************************
 * blastoff.c
 * 
 * Doug Lloyd
 * 
 * Demonstrates a possibly advantageous "fall-through"
 * use of a switch statement
 * 
 * ***********************************************/
 
 #include <stdio.h>
 #include <cs50.h>
 
 int main(void)
 {
    printf("Give me a number from 1 to 5: ");
    int number = GetInt();
     
    switch(number)
    {
        case 5:
            printf("Five\n");
        case 4:
            printf("Four\n");
        case 3:
            printf("Three\n");
        case 2:
            printf("Two\n");
        case 1:
            printf("One\n");
            
        // notice that regardless of what user entered, the
        // default captures all other "start points"
        default:
            printf("Blastoff!\n");
    }
 }