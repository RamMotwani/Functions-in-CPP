#include<iostream>
using namespace std;
int large_digit(int);
int main()
{
    int n,ans;
    cout<<"enter a digit to find the largest no. in it"<<endl;
    cin>>n;
    ans=large_digit(n);
    cout<<ans<<" is the largest no. in "<<n<<endl;
    return 0;
}
int large_digit(int n)
{
    int a=0;
    while(n!=0)
    {
        if(a<n%10)
            {
                a=n%10;
            }
           n=n/10;
    }
    return a;


}


