// Inverted half pyramid
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of row and col"<<endl;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j<n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
   
    return 0;
}