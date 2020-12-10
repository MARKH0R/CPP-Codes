#include <iostream>

using namespace std;

int main ()
{
    int a,b,x,y,sum,product,Both;
    float c,z;
    cout<< "first Adding and then multiply and in last adding both sum and product "<< endl;
    cout<<"enter value of a\t";
    cin>> a;
    cout<<"enter value of b\t";
    cin>> b;
    cout<<"enter value of x\t";
    cin>> x;
    cout<<"enter value of y\t";
    cin>> y;
    
    sum = a+b;
    cout<<"sum ="<<sum<< endl;
    
    product = x*y;
    cout<< "product ="<<product<< endl;
    
    Both = sum+ product;
    cout<< "sum of both ="<<Both <<endl;
    return 0;
}