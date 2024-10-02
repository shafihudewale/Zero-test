#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user to input name
    string answer = get_string("What's your name? ");
    {
        // Print users hello with users name
        printf("hello, %s!\n", answer);
    }

}