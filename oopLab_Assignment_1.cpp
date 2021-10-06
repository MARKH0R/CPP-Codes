#include <iostream>
using namespace std;

int main ()
{
    int number ;
    cout << "Enter a number :\t";
    cin >> number;
    if (number % 2 == 0)
    {
        cout <<number <<" is even ";
    }
    else
    {
        cout<<number<< " is odd "<<endl;
    }
    return 0;
}