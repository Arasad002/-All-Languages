// 2 ) Function with dificult argument


#include <iostream>
using namespace std;

int sum(int a = 10, int b = 6)
{
    return a + b;
}

int main()
{
    cout << "Sum of a and b = " << sum(91, 5);


    return 0;
}