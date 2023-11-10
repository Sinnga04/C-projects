// C Program to illustrate the static variable lifetime
#include <stdio.h>
#include "ft_printf.h"
 
// function with static variable
int fun()
{
    static int count = 0;
    ++count;
    return count;
}
 
int main()
{

    printf("%d ", fun());
    printf("%d ", fun());
    printf("%d ", fun());
    printf("%d ", fun());
    printf("%d ", fun());
    printf("%d ", fun());
    printf("%d ", fun());
    return 0;
}