#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Qual o seu nome?\n");
    printf("Olá, %s!\n", name);
}
