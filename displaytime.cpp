#include <iostream>
using namespace std;


void ConvertSectoDay(int n)
{
    int year,month,day,hour,minutes,seconds;
    year= n/(12*30*24*3600);
     n=n%(12*30*24*3600);

    month= n/(30*24*3600);
    n=n%(30*24*3600);

    day = n / (24 * 3600);
 
    n = n % (24 * 3600);
    hour = n / 3600;
 
    n %= 3600;
    minutes = n / 60 ;
 
    n %= 60;
    seconds = n;
     
    cout << year<< " " << "year \n" << month << " " << "months \n" << day << " " << "days \n" << hour
         << " " << "hours \n" << minutes << " "
         << "minutes \n " << seconds << " "
         << "seconds \n"  << endl;
}
  
// Driver code
int main()
{
    // Given n is in seconds
    int n ;
    cout <<"Enter secounds : ";
    cin >> n;
    ConvertSectoDay(n);
    return 0;
}