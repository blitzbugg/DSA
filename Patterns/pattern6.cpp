#include<iostream>
using namespace std;
// Floyd's Triangle

int main(){
    cout<<"Enter the limit"<<endl;
    int n;
    int count = 1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j = 1; j<=i; j++)
        {

             cout<<count<<" ";
             count++;
        }
        cout<<endl;
    }

    return 0;
}