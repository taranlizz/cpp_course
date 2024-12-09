// #include <iostream>

// using std::string, std::cout, std::endl;

// // Input and output function parameters

// // Output parameters should be passed in such a way that you can modify
// // the you can modify the arguments inside of the function.
// // Options are passing by reference or pointer. References are preferred.

// // Input parameters shouldn't be modifiable from inside of the function.
// // The function need to get input from the arguments.
// // You enforce restrictions with the const keyword.
// // Options are passing by const reference, passing by a pointer to const, or even passing by const pointer to const

// void max_str(const string &input1, const string input2, string &output);
// void max_int(int input1, int input2, int &output);
// void max_double(double input1, double input2, double *output);

// int main()
// {
//     // string out_str;
//     // string string1 = "Jennie";
//     // string string2 = "Billie";

//     // max_str(string1, string2, out_str);

//     // cout << "max_str: " << out_str << endl;

//     int out_int = 0;
//     int int1 = 45;
//     int int2 = 65;

//     max_int(45, 65, out_int);
//     cout << "max_int: " << out_int << endl;
// }

// void max_str(const string &input1, const string input2, string &output)
// {
//     if (input1 > input2)
//     {
//         output = input1;
//     }
//     else
//     {
//         output = input2;
//     }
// };

// void max_int(int input1, int input2, int &output)
// {
//     if (input1 > input2)
//     {
//         output = input1;
//     }
//     else
//     {
//         output = input2;
//     }
// }

// void max_double(double input1, double input2, double *output)
// {
//     if (input1 > input2)
//     {
//         *output = input1;
//     }
//     else
//     {
//         *output = input2;
//     }
// }
