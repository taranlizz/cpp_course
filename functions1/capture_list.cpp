#include <iostream>

using namespace std;

int main()
{
    double a = 10;
    double b = 10;

    // auto func = [a, b]()
    // {
    //     cout << "a + b: " << a + b << endl;
    // };

    // func();

    // Capturing by value: what we have in the lambda function is a copy
    int c = 45;
    // auto func1 = [c]()
    // {
    //     cout << "Inner value: " << c << " &c: " << &c << endl;
    // };
    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << "Outer value: " << c << " &c: " << &c << endl;
    //     func1();
    //     c++;
    // }

    // Capturing by reference: working on the original outside value
    // auto func2 = [&c]()
    // {
    //     cout << "Inner value: " << c << " &c: " << &c << endl;
    // };
    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << "Outer value: " << c << " &c: " << &c << endl;
    //     func2();
    //     c++;
    // }

    // Capturing everything by value
    // auto func3 = [=]()
    // {
    //     cout << "Inner value c: " << c << " &c: " << &c << endl;
    //     cout << "Inner value a: " << a << " &a: " << &a << endl;
    //     cout << "Inner value b: " << b << " &b: " << &b << endl;
    // };
    // func3();

    // cout << "Outer value c: " << c << " &c: " << &c << endl;
    // cout << "Outer value a: " << a << " &a: " << &a << endl;
    // cout << "Outer value b: " << b << " &b: " << &b << endl;

    // Capturing everything by reference
    auto func4 = [&]()
    {
        cout << "Inner value c: " << c << " &c: " << &c << endl;
        cout << "Inner value a: " << a << " &a: " << &a << endl;
        cout << "Inner value b: " << b << " &b: " << &b << endl;
    };
    func4();
    cout << "Outer value c: " << c << " &c: " << &c << endl;
    cout << "Outer value a: " << a << " &a: " << &a << endl;
    cout << "Outer value b: " << b << " &b: " << &b << endl;
}
