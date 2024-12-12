#include <iostream>
#include <type_traits>
#include <concepts>

using namespace std;

template <typename T>
concept MyIntegral = is_integral_v<T>;

template <typename T>
concept Multipliable = requires(T a, T b) {
    a *b;
};

template <typename T>
concept Incrementable = requires(T a) {
    a += 1;
    ++a;
    a++;
};

template <Multipliable T>
T mult(T a, T b)
{
    return a * b;
}

// // Syntax1
// template <typename T>
//     requires MyIntegral<T>
// T add_1(T a, T b)
// {
//     return a + b;
// }

// // Syntax2
// template <MyIntegral T>
// T add_2(T a, T b)
// {
//     return a + b;
// }

// // Syntax3
// auto add_3(MyIntegral auto a, MyIntegral auto b)
// {
//     return a + b;
// }

// int main()
// {
// }