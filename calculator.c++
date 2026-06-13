#include <iostream>

using namespace std;
class calculator
{
private:
    int A, s, m;
    float a, b, d;

public:
    void data()
    {
        cout << " Enter any two numbers For Calculation\n";
        cin >> a >> b;
    }
    void sum()
    {

        s = a + b;
        cout << a << " + " << b << " = " << s << "\n";
    }
    void subtraction()
    {
        bool s = (a < b);
        if (s)
        {
            m = a - b;
            cout << a << " - " << b << " = " << m << " make (a) greater than (b) for positive integer\n";
        }
        else
        {
            m = a - b;
            cout << a << " - " << b << " = " << m << "\n";
        }
    }
    void multi()
    {
        bool num = (a == 0 or b == 0);
        if (num)
        {
            A = a * b;
            cout << a << " * " << b << " = " << A;
            cout << " (enter non zero number for NON ZERO value)\n";
        }
    }

    void division()
    {
        bool zero = (b == 0);
        if (zero)
        {
            cout << "You cannot divide by zero\n";
        }
        else
        {
            d = (float)a / b;
            cout << a << " / " << b << " = " << d << "\n";
        }
    }
};
int main()
{
    calculator neeraj;
    neeraj.data();
    neeraj.sum();
    neeraj.subtraction();
    neeraj.multi();
    neeraj.division();
    return 7;
}