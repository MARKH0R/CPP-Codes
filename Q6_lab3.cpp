#include <iostream>
using namespace std;

int main ()
{
    int num, fac=1, i = 1;
    cout <<"Enter a number :\t";
    cin >> num;
    while( i <= num )
    {
        fac *=i;
        i++;
    }
    cout <<"factorial of the "<< num <<" = "<<fac<<endl;
system ("pause");
    return 0;

}
