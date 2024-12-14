#include <iostream>

using namespace std;

class Wrapper
{
private:
    int m_var1 = 0;
    int m_var2 = 0;
    string m_name = "Lorem ipsum dolor sit amet...";

public:
    void do_something() {};
    void print_info()
    {
        cout << "var1 : " << m_var1 << endl;
        cout << "var2 : " << m_var2 << endl;
        cout << "name : " << m_name << endl;
    }
};

int main()
{
    Wrapper wrap1;
    cout << "sizeof(wrap1): " << sizeof(wrap1) << endl;
}