// 3) Function Overloding

#include <iostream>
using namespace std;

int arr(int a, int b)
{
    return a + b;
}

int arr(int c, float d)
{
    return c * d;
}

float arr(float e, int f)
{
    return e / f;
}

int main()
{
    int a, b, c, f, sum, mul, div;
    float e, d;

    cout << "Enter the A = ";
    cin >> a;
    cout << "Enter the B = ";
    cin >> b;
    cout << "Enter the C = ";
    cin >> c;
    cout << "Enter the D = ";
    cin >> d;
    cout << "Enter the E = ";
    cin >> e;
    cout << "Enter the F = ";
    cin >> f;

    sum = arr(a, b);
    mul = arr(c, d);
    div = arr(e, f);

    cout << "Sum = " << sum << endl;
    cout << "Mul = " << mul << endl;
    cout << "Div = " << div << endl;

    return 0;
}