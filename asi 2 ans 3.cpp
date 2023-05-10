#include<iostream>
using namespace std;
int pow(int,int);
int main()
{
    int x,y,ans;
    cout<<"Enter the value x and y to calculate x raised to y"<<endl;
    cin>>x>>y;
    ans=pow(x,y);
    cout<<x<<" raised to "<<y<<" is "<<ans<<endl;
    return 0;
 }
 int pow(int x,int y)
 {
     int a=1;
     while(y!=0)
     {
         a=x*a;
         y--;
     }
     return a;
 }
