#include <iostream>
using namespace std;

int main()
{
    int sub1, sub2, sub3, total, per, roll_no;
    char name[100];

    cout << "Enter the Name = ";
    cin >> name;
    cout << "Enter the Roll no = ";
    cin >> roll_no;
    cout << "Enter the English marks = ";
    cin >> sub1;
    cout << "Enter the Maths marks = ";
    cin >> sub2;
    cout << "Enter the Gujarati marks = ";
    cin >> sub3;

    cout << "My name is " << name << endl;
    cout << "My Roll no is " << roll_no << endl;

    total = sub1 + sub2 + sub3;
    per = total / 3;

    cout << "Total is = " << total << endl;
    cout << "persentage is = " << per << endl;

    return 0;
}