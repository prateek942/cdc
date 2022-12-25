#include <stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked
inline long long int sscan()
{
   long long int n=0;
   int ch=gc();
   while( ch < '0' || ch > '9' )
        ch=gc();
   while(  ch >= '0' && ch <= '9' )
    {
        n = (n<<3)+(n<<1) + ch-'0';
        ch=gc();
    }
 
   return n;
}
 
inline void lprint(long long int a)
{                                       /*for print long int*/
 int i=0;
char S[40];
while(a>0)
{
    S[i++]=a%10+'0';
a=a/10;
}
--i;
while(i>=0)
pc(S[i--]);
//pc('\n');
}
long long int gcd(long long int a,long long int b) 
{
	return (b==0)?a:gcd(b,a%b);
}
long long int gcd_bin(long long int u, long long int v) {
  long long int t, k;
 
  u = u < 0 ? -u : u; /* abs(u) */
  v = v < 0 ? -v : v; 
  if (u < v) {
    t = u;
    u = v;
    v = t;
  }
  if (v == 0)
    return u;
 
  k = 1;
  while (u & 1 == 0 && v & 1 == 0) { /* u, v - even */
    u >>= 1; v >>= 1;
    k <<= 1;
  }
 
  t = (u & 1) ? -v : u;
  while (t) {
    while (t & 1 == 0) 
      t >>= 1;
 
    if (t > 0)
      u = t;
    else
      v = -t;
 
    t = u - v;
  }
  return u * k;        
}
 
int main()
{
    long long int n,x,k,num,count,i,res1,res2,res3;
    	n=sscan();
    	k=sscan();
    	count=0;
    	for(i=0;i<n;i++)
    	{
    		//scanf("%lld",&num);
    		num=sscan();
    		if(num==k) count++;
    	}
    	if(count==0)
    	{
    		printf("0/1\n");
    	}
    	else{
	    	res1=count*(count-1)*(count-2);
	    	res2=n*(n-1)*(n-2);
	    	res3=gcd(res1,res2);
	    	//printf("%lld/%lld\n",res1/res3,res2/res3);
	    	lprint(res1/res3);
	    	printf("/");
	    	lprint(res2/res3);
	    	printf("\n");
    	}
    return 0;
}
