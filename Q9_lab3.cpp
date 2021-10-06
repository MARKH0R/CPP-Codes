#include<iostream>
using namespace std;

int main ()
{
    int num, i,rev=0,palindromeNumber;
    cout <<"enter a number :\t";
    cin>>num;
    palindromeNumber=num;
    do
    {
        i= num%10;
        rev = (rev * 10) + i;
        num /= 10;

    } while (num != 0);
    if(palindromeNumber == rev)
    {
        cout <<"the number you enter is palindrome Number\t"<<rev<<endl;
    }
    else
    {
        cout <<"number is not palindrome Number. "<<rev<<endl;
    }

system("pause");
    return 0;

}