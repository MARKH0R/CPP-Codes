#include <iostream>
using namespace  std;

int main ()
{
    int a=1, o_sum=0;
    while (a<=100)
    {

        if (a % 2 !=0)
        {

            o_sum += a;

        }
        a++;

    }

     cout <<"EVEN SUM OF ALL ODD NUMBER FROM 1 TO 100 = \t"<<o_sum<<endl;


    return 0;
}