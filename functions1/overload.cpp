#include <iostream>
#include <string>
using namespace std;

// Function overloading is a feature in C++ that allows multiple functions with the same name to exist in the same scope,
// but with different parameter lists.
// The compiler differentiates between these functions based on their number, types, or order of parameters.
// Functions must differ in their parameter list (number, types, or order)
// The return type alone is not sufficient to distinguish overloaded functions

int add(int a, int b);
double add(double a, double b);
string add(string a, string b);

int main()
{
    int num1 = 35;
    int num2 = 45;

    double double1 = 45.7;
    double double2 = 68.3;

    string str1 = "Hello";
    string str2 = ", World!";

    cout << "int add(int a, int b) : " << add(num1, num2) << endl;
    cout << "double add(double a, double b) : " << add(double1, double2) << endl;
    cout << "string add(string a, string b) : " << add(str1, str2) << endl;
}

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

string add(string a, string b)
{
    return a + b;
}