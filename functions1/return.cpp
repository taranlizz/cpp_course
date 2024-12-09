#include <iostream>

using std::string, std::cout, std::endl;

int sum(int a, int b);

string concat(string str1, string str2);

int main()
{
    // int a = 24;
    // int b = 26;
    // int result = sum(a, b);

    // cout << "result: " << result << endl;

    string result = concat(string{"Hello"}, string{", World!"});
    cout << "Out : &result: " << &result << endl;
    cout << "result: " << result << endl;
}

int sum(int a, int b)
{
    return a + b;
}

string concat(string str1, string str2)
{
    string result = str1 + str2;
    cout << "In : &result : " << &result << endl;
    return result;
}