#include <iostream>
using namespace std;

class a
{

    int x, y;

public:
    void get()
    {
        cout << "Enter the X = ";
        cin >> x;
        cout << "Enter the Y = ";
        cin >> y;
    }
    int cou()
    {
        return x + y;
    }
};

class b : public a
{
    int r;

public:
    void put()
    {
        r = cou();

        cout << "Sum of X and Y = " << r << endl;
    }
};

int main()
{
    b s1;

    s1.get();
    s1.put();

    return 0;
}