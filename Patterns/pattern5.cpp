// Half pyramid using numbers
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of row and col"<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j = 1; j<=i; j++)
        {
             cout<<i<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}