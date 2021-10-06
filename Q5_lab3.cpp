#include<iostream>
using namespace std;

int main()
{
    int spc,rows,t=1;
    cout << " Enter a number of row:\t ";
    cin >> rows;

   spc=rows+4-1;

   for(int i=1;i<=rows;i++)
   {
         for(int k=spc;k>=1;k--)
            {
              cout<<" ";
            }
	   for(int j=1;j<=i;j++)
	   cout<<t++<<" ";
	cout<<endl;
    spc--;
   }
system ("pause");fffff
   return 0;
}