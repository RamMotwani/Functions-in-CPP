#include<iostream>
using namespace std;
int area(int,int);
float area(int);
int area(int,int,int);
int main()
{
    int r;
    cout<<"Enter radius to find the area of circle"<<endl;
    cin>>r;
    cout<<"area of circle is "<<area(r)<<endl;
    int l,b;
    cout<<"Enter length and breath to find area of rectangle"<<endl;
    cin>>l>>b;
    cout<<"Area of rectangle is "<<area(l,b)<<endl;
    int a=2,h,base;
    cout<<"Enter height and base to find the area of triangle"<<endl;
    cin>>h>>b;
    cout<<"Area of triangle is "<<area(a,h,b)<<endl;

    return 0;
}
int area(int l,int b)
{
    return l*b;
}
float area(int r)
{
    float p=3.14;
    return p*r*r;
}
int area(int a,int h,int b)
{
    return b*h/a;
}

