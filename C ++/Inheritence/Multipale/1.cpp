#include <iostream>
using namespace std;

class sum
{

    int a, b;

public:
    void get()
    {
        cout << "Enter the A = ";
        cin >> a;
        cout << "Enter the B = ";
        cin >> b;
    }
    int cou()
    {
        return a + b;
    }
};

class mul
{
    int x, y;

public:
    void get1()
    {
        cout << "Enter the X = ";
        cin >> x;
        cout << "Enter the Y = ";
        cin >> y;
    }
    int cou1()
    {
        return x * y;
    }
};

class put1 : public sum, public mul
{
    int p, q;

public:
    void put()
    {
        p = cou();
        q = cou1();

        cout << "Sum of A and B = " << p << endl;
        cout << "Mul of X and Y = " << q << endl;
    }

private:
    int range, k = 0, n = 1, i, s;

public:
    void febo()
    {
        range = p + q;
        cout << "Range = "<< range << endl;

        cout << "Febbonaci serice = ";
        for ( i = 0; i < range; i++)
        {
            s = k + n;
            cout << s<<",";
            k = n;
            n = s;
        }
        
    }
};

int main()
{
    put1 s1;

    s1.get();
    s1.get1();
    s1.put();
    s1.febo();

    return 0;
}