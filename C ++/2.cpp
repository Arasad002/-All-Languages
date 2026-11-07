#include <iostream>
using namespace std;

int main()
{
    int no, i, fecto = 1;

    cout << "Enter the no = "  ; 
    cin >>  no;

    for ( i = 1; i <= no; i++)
    {
        fecto *= i;
    }
    
    cout << "The Fectorial serice is "<<fecto ;


    return 0;
}