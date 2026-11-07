// class

#include <iostream>
using namespace std;

class student
{
private:
    int roll_no;
    char name[100];

public:
    void getdata()
    {
        cout << "Enter the Roll no = ";
        cin >> roll_no;
        cout << "Enter the name = ";
        cin >> name;
    }
    void putadat()
    {
        cout << "Roll no is = " << roll_no << endl;   
        cout << "Name = " << name << endl;
    }
};

int main()
{
    student s1;

    s1.getdata();
    s1.putadat();


    return 0;
}