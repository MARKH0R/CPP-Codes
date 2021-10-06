//calculator with the help of if else
#include<iostream>
using namespace std;

int main ()
{
    int X,Y;
    char ch;

    cout <<"Enter two number :\n";
    cin >>X>>Y;

    cout <<"Enter operation from (+,-,*,/) you want to perform:\t";
    cin >> ch;
    
    if (ch == '+')
    {
        cout <<X<<" + "<<Y<<" = "<<X+Y;
    }
    else if (ch == '-')
    {
        cout <<X<<" - "<<Y<<" = "<<X-Y;
    }
    else if (ch == '*')
    {
        cout <<X<<" * "<<Y<<" = "<<X*Y;
    }
    else if (ch == '/')
    {
        cout <<X<<" / "<<Y<<" = "<<X/Y;
    }
    else if (ch == '%')
    {
        cout <<"remainder of X and Y = "<<X%Y; 
    }
    else 
    {
        cout <<"you enter the wrong operation. "<<endl;
    }

    return 0;

}