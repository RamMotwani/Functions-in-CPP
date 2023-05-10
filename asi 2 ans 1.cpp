#include<iostream>
using namespace std;
void prime(int);
int main()
{
    int n;
    cout<<"Enter a no. to find it is prime no. or not"<<endl;
    cin>>n;
    prime(n);
    return 0;
}
void prime(int n)
{
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(i==n)
    {
        cout<<n<<" is prime no."<<endl;
    }
    else
    {
        cout<<"not a prime no."<<endl;
    }




}
