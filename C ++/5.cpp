#include <iostream>
using namespace std;

int main()
{
    int password, times = 0;
    while (password != 1234) 
    {
    if (times++ >= 3) 
    {
        cout << "Locked!\n";
        break;
    }
        cout << "Password: ";
        cin >> password; // input
}


return 0;
}
  
