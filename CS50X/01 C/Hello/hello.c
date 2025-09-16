#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // We get user name
    string name = get_string("What is your Name??? \n");
    // and giving him Hello
    printf("Hello, %s\n", name);
}
