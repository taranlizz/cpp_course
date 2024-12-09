#include <iostream>
#include "operations.h" //Preprocessor

using namespace std;

// Sometimes it's more flexible to split the function into it's header and body
// and keep the code for each in different places

// The prototype needs to come BEFORE the function call in your life.

void say_age(int age);
void say_age1(int *age);
void say_age2(int &age);

int main(int argc, char **argv)
{
    int max_num = max(45, 67);
    std::cout << "max : " << max_num << std::endl;

    int min_num = min(68, 73);
    std::cout << "min : " << min_num << std::endl;

    int age = 23;
    int age1 = 10;
    int age2 = 30;

    cout << endl;
    // Passing an argument by value
    cout << "Pass by value: " << endl;
    cout << "age - before :" << age << " &age: " << &age << endl;
    say_age(age);
    cout << "age - after :" << age << " &age: " << &age << endl;

    cout << endl;
    // Passing an argument by pointer
    cout << "Pass by pointer: " << endl;
    cout << "age1 - before :" << age1 << " &age: " << &age1 << endl;
    say_age1(&age1);
    cout << "age1 - after :" << age1 << " &age: " << &age1 << endl;

    cout << endl;
    // Passing an argument by reference
    cout << "Pass by reference: " << endl;
    cout << "age2 - before :" << age2 << " &age: " << &age2 << endl;
    say_age2(age2);
    cout << "age2 - after :" << age2 << " &age: " << &age2 << endl;
}

void say_age(int age)
{
    age++; // The parameter was passed by value, so we manipulate the copy of the variable
    cout << "Hello! You are " << age << " years old." << endl;
    cout << "&age (inside the func) : " << &age << endl;
}

void say_age1(int *age)
{
    cout << *age << endl;
    (*age)++;
    cout << "Hello You are! " << *age << " years old." << endl;
    cout << "&age (inside the func) : " << age << endl;
}

void say_age2(int &age)
{
    ++age;
    cout << "Hello! You are " << age << " years old." << endl;
}