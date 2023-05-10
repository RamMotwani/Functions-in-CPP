#include<iostream>
using namespace std;
inline void add(int,int,int=0);
int main()
{
    int a,b,c,x;
    cout<<"Enter how many no. you want to add 2 or 3"<<endl;
    cin>>x;
    if(x==2)
    {
        cout<<"Enter two no.s"<<endl;
        cin>>a>>b;
        add(a,b);
    }
    if(x==3)
    {
        cout<<"Enter three no.s"<<endl;
        cin>>a>>b>>c;
        add(a,b,c);
    }

    return 0;
}
void add(int a,int b,int c)
{
    cout<<"sum is "<<a+b+c<<endl;
}
