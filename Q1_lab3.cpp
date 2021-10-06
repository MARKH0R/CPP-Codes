#include <iostream>
using namespace std;

int main()
{
    int rightTri;

    cout << "Enter number of rows: ";
    cin >> rightTri;

    for(int i = 1; i <= rightTri; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

system("pause");
    return 0;
}