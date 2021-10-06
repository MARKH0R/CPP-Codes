#include <iostream>
using namespace std;

int main ()
{ //Write a program in C ++ to display the cube of the number up to given an integer.
    int num;
    cout <<"Enter a number :\t ";
    cin>>num;

    for (int i=1 ; i<=num ; i++)
    {
        cout <<"Number is :"<< i<<" and cube of the "<<i<<" is : "<<i*i*i<<endl;
    }


system("pause");
    return 0;
}