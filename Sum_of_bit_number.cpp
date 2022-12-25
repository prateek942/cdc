#include<iostream>
#include<cmath>
using namespace std;
int SumofSetBitNumber(int n , int set)
{
    int z = pow(2 , n);
    z--;
    int sum = 0;
    for(int i = 0; i <= z ; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n ; j++)
        {
            if((i >> j)&1)
            {
                cnt++;
            }
        }
        if(cnt == set)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int n , set;
    cin >> n >> set;
    int sum = SumofSetBitNumber(n , set);
    cout << sum ;
    return 0;
    
}
