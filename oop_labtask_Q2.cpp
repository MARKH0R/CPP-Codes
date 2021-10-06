//calculator with the help of switch statement
#include<iostream>
using namespace std;

int main ()
{
    int A,B;
    char ope;

    cout <<"Enter two number A and B:\n";
    cin >>A>>B;

    cout <<"Enter operation from (+,-,*,/,\'%\') you want to perform:\t";
    cin >> ope;
    
    switch (ope)
    {
        case '+':
        {
            cout <<A<<" + "<<B<<" = "<<A+B<<endl;
            break;
        }
        case '-':
        {
            cout <<A<<" - "<<B<<" = "<<A-B<<endl;
            break;
        }
        case '*':
        {
            cout <<A<<" * "<<B<<" = "<<A*B<<endl;
            break;
        }
        case '/':
        {
            cout <<A<<" / "<<B<<" = "<<float(A)/float(B)<<endl;
            break;
        }
        case '%':
        {
            cout <<"remainder of A and B = "<<A%B<<endl; 
            break;
        }
        default:
        {
            cout <<"enter correct operation. You enter worng operation! "<<endl;
        }
    }
    
   
    return 0;

}