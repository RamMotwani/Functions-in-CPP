#include<iostream>
using namespace std;
void fibonacci(int);
int main()
{
    int n;
    cout<<"Enter a no. to check its in fibonacci series"<<endl;
    cin>>n;
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int a=1,b=0,c;
    if(n==a || n==b)
    {
        cout<<"no. is from fibonacci series"<<endl;
        return;
    }
    c=a+b;
    while(c<=n)
    {
        if(n==c)
        {
            cout<<"no. is from fibonacci series"<<endl;
            break;
        }
        a=b;
        b=c;
        c=a+b;
    }
    if(n!=c)
    {
        cout<<"not from fibonacci series"<<endl;
    }
}
