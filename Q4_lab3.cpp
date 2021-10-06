#include <iostream>
using namespace std;

int main()
{
   int line, num = 1;

    cout << "Enter number of rows: ";
    cin >> line;

    for(int i = 1; i <= line; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << num<< " ";
            ++num;
        }

        cout << endl;
    }



system("pause");   //will pause the screen until you press any key
    return 0;
}