// 4) Neasted function

#include <iostream>

using namespace std;
void hello()
{
    cout << "I am Happy";
}

int largest(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

void display()
{
    cout << "Largest = " << largest(10, 8);
}
int main()
{
    hello();
    display();

    return 0;
}