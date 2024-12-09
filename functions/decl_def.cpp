#include <iostream>

// Sometimes it's more flexible to split the function into it's header and body
// and keep the code for each in different places

int max(int a, int b); // Function declaration/Function header/Function prototype;

// The prototype needs to come BEFORE the function call in your life.

int main(int argc, char **argv)
{
}

// Function definition or implementation
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}