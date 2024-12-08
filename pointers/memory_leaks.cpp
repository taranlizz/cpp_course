#include <iostream>

using namespace std;

// Memory leaks emerge in situations when we lose access to memory that is dynamically allocated

int main()
{
    int *p_number = new int{22}; // Points to address1;

    // Should delete and reset here

    int number{55}; // lives at address2

    p_number = &number; // Now p_number points to address2, but address1 is still in use by our program.
                        // But our program has lost access to that memory location.
                        // Memory has been leaked.

    { // Nested scopes with dynamically allocated memory
        int *p_number2{new int{57}};

        // Use the dynamic memory

        // Release and reset
    }
}