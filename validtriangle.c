#include <stdio.h>
#include <cs50.h>

int valid_triangle( int l1, int l2, int l3);

int main(void)
{
    int l1 = get_int("l1: ");
    int l2 = get_int("l2: ");
    int l3 = get_int("l3: ");

    if (l1 + l2 <= l3 || l1 + l3 <= l2 || l2 + l3 <= l1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}