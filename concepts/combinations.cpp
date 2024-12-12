// #include <iostream>

// // Concepts can be combined with the logical operators && and ||

// template <typename T>
// concept TinyType = requires(T t) {
//     requires sizeof(T) <= 4;
// };

// // template <typename T>
// //     requires std::integral<T> || std::floating_point<T>
// // T add(T a, T b)
// // {
// //     return a + b;
// // }

// template <typename T>
//     requires std::integral<T> && TinyType<T>
// T add(T a, T b)
// {
//     return a + b;
// }
// int main()
// {
//     int x{5};
//     int y{6};

//     add(x, y);
// }