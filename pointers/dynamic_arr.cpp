#include <iostream>

using namespace std;

// arrays allocated on the heap with the new operator.
// Can also use the std::nothrow version of new.

int main()
{
    size_t size_arr{10};

    // Different ways you can declare an array
    // dynamically and how they are initialized

    double *p_salaries = new double[size_arr];                        // array will contain garbage values
    int *p_students = new (nothrow) int[size_arr]{};                  // all values are initialized to 0
    double *p_scores = new (nothrow) double[size_arr]{1, 2, 3, 4, 5}; // first five values will be initialized, and the rest will be 0's.

    if (p_scores)
    {
        for (size_t i{}; i < size_arr; i++)
        {
            cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << endl;
        }
    }

    delete[] p_scores;
    p_scores = nullptr;

    delete[] p_students;
    p_students = nullptr;

    delete[] p_salaries;
    p_salaries = nullptr;

    // Static arrays vs dynamic arrays

    int scores[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "scores size: " << size(scores) << endl; // lives on the stack
    for (int s : scores)
    {
        cout << "value : " << s << std::endl;
    }

    int *p_scores1 = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // lives on the heap;

    // cout << "p_scores size: " << size(p_scores) << endl; // ERROR
    // for (int s : p_scores)
    // {
    //     cout << "value : " << s << std::endl;
    // } // ERROR

    // A dynamic array decays to pointer
}