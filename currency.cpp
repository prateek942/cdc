#include<iostream>
using namespace std;
int main()
{
    int a , b ,c ;
    cin >> a;
    b = a / 100;
    c = a% 100;
    b = b+c  / 50;
    c = c % 50;
    b = b+ c/ 20;
    c = c % 20;
    b = b + c /10;
    c = c % 10;
    b = b +  c /5;
    c = c % 5;
    b = b+ c / 2;
    c= c% 2;
    b = b + c / 1;
    c = c % 1;
    if(b == 0)
    {
        cout << 0 ;
    }
    else
    {
        cout << b ;
    }
    
    return 0;
}
