//1)  function recursion

#include <iostream>
using namespace std;

int factorial(int no )
{
    if (no == 0 || no ==1)
    {
        return 1;
    }
    else
    {
        return no * factorial(no - 1);
    }
    
}
int main()
{
    cout << "factorial = " << factorial(5);


    return 0;
}