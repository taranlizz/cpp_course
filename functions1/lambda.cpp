#include <iostream>

using namespace std;

// Lambda functions is a mechanism to set up anonymous functions.
// Once we have them set up, we can either give them names and call them,
// or we can even get them to do things directly.

// Lambda function signature: [capture list] (parameters) -> return type{
//                                             function body
//                             }

// int main()
// {
//     // Declaring a lambda function and calling it through a name
//     //  auto func = []()
//     //  {
//     //      cout << "Hello World!" << endl;
//     //  };
//     //  func();

//     // Declaring a lambda function and call it directly
//     // []()
//     // {
//     //     cout << "Hello World!" << endl;
//     // }();

//     // A lambda function that takes parameters
//     // [](double a, double b)
//     // {
//     //     cout << "a + b: " << a + b << endl;
//     // }(10.0, 5.0);

//     // auto func1 = [](double a, double b)
//     // {
//     //     cout << "a + b: " << a + b << endl;
//     // };
//     // func1(10.0, 20.0);

//     // Lambda function that returns something
//     // auto result = [](double a, double b)
//     // {
//     //     return a + b;
//     // }(10, 20);

//     // cout << "result : " << result << endl;

//     // cout << "result : " << [](double a, double b)
//     // {
//     //     return a + b;
//     // }(10, 20)
//     //      << endl;

//     // // Lambda function with explicit return type
//     auto func2 = [](double a, double b) -> int
//     {
//         return a + b;
//     };

//     auto func3 = [](double a, double b)
//     {
//         return a + b;
//     };

//     cout << sizeof(func2(2.0, 6.0)) << endl; // 4
//     cout << sizeof(func3(2.0, 6.0)) << endl; // 8
// }