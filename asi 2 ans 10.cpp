#include<iostream>
using namespace std;
int add(int,int);
float add(float,float);
int main()
{
    int a,b;
    cout<<"Enter two integer no.s to add them"<<endl;
    cin>>a>>b;
    cout<<"addition is "<<add(a,b)<<endl;
    float x,y;
    cout<<"Enter two float no.s to add them"<<endl;
    cin>>x>>y;
    cout<<"addition is "<<add(x,y)<<endl;
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
float add(float x,float y)
{
    return x+y;
}
