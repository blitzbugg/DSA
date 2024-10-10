// Inverted half pyramid
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of row and col"<<endl;
    int row,col;
    cin>>row>>col;
    for (int i = 0; i <= row; i++)
    {
        for (int j = i; j < col-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}