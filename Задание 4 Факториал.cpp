#include "iostream"
using namespace std;
unsigned long F (short n)
{
if (n==0 || n==1)
return 1;
else return n*F(n-1);
}
int main()
{
short n;
cout<<"n=";
cin>>n;
unsigned long f=F(n);
cout<<n<<"!="<<f<<endl;
return 0;
}
