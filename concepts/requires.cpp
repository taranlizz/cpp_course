// #include <iostream>

// // The requires clause can take in four kinds of requirements:
// // -- simple requirements
// // -- nested requirements
// // -- compound requirements
// // -- type requirements

// // Simple requirement: expressions only checked for valid syntax
// template <typename T>
// concept TinyType = requires(T t) {
//     sizeof(T) <= 4;          // Simple requirement: only enforces syntax
//     requires sizeof(T) <= 4; // Nested requirements: checks if the expressions is true
// };

// template <typename T>
// concept Addable = requires(T a, T b) {
//     // noexcept is optional
//     { a + b } -> std::convertible_to<int>; // Compound requirement
//     // Checks if a + b is valid syntax, doesn't throw exceptions(optional), and the result is convertible to int
// };

// Addable auto add(Addable auto a, Addable auto b)
// {
//     return a + b;
// }

// int main()
// {
//     double x = 67;
//     double y = 56;

//     // std::string x = "Hello";
//     // std::string y = "World";

//     add(x, y);
// }