#include <iostream>
#include <string>

using namespace std;

// Function is a reusable piece of code that can take a number of optional inputs and produce some desirable result

// syntax: return_type function_name(param1, param2, ...)
// {
// operations
// return return_type
// }

// No input, no output

// void function_name(){
//  operations
//  return return_type
// }

// signature: function name + function parameters

void show_args(int argc, char **argv)
{
    cout << "Arguments count: " << argc << endl;
    for (size_t i{}; i < argc; i++)
    {
        cout << "Argument [" << i << "] : " << argv[i] << endl;
    }
};

void enter_bar(int age)
{
    if (age > 18)
    {
        cout << "You're " << age << " years old. Please proceed." << endl;
    }
    else
    {
        cout << "Prohibited! You're too young.";
    }
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void say_hello()
{
    cout << "Hello, world!" << endl;
}

int main(int argc, char **argv)
{
    show_args(argc, argv);

    int a_value = 14;
    int b_value = 10;

    int a = 35;
    int b = 41;

    double f = 12.33;
    double g = 16.05;

    cout << "Calling the enter_bar function: " << endl;
    enter_bar(22);

    int max_number = max(a, b);

    cout << "max_number: " << max_number << endl;

    // doubles will undergo an implicit narrowing conversion form double to int.
    // parameters passed this way are scoped locally in the function
    // changes to them are not visible outside the function
    // what we have inside function are COPIES of the args passed to the function

    int max_number1 = max(f, g);

    cout << "f: " << f << endl;
    cout << "g: " << g << endl;

    cout << "max_number1: " << max_number1 << endl;

    say_hello();
}