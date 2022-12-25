#include<iostream>
using namespace std;

int countDigitOccurrences(int l, int u, int x)
{
    int rem, count = 0;
    for(int i = l; i <= u; i++)
    {
        int temp = i;
        while(temp != 0 )
        {
            if(temp % 10 == x)
                count++;
            temp = temp / 10;
        }
    }
    return count;
}
int main()
{
   int l, u, x;
   cin >> l >> u >> x;
   cout << countDigitOccurrences(l, u, x);
   return 0;
}
