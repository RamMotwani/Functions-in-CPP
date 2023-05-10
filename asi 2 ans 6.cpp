#include<iostream>
using namespace std;
inline void swaping(int&,int&);
int main()
{
    int a,b;
    cout<<"enter two no.s to swap their values"<<endl;
    cin>>a>>b;
    swaping(a,b);
    return 0;
}
void swaping(int &x, int &y)
{
    int z;
    z=x;
    x=y;
    y=z;
    cout<<x<<endl<<y;
}
