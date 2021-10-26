#include<iostream>
using namespace std;

int main(){
    //Input
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int val;
    cin>>val;

    //Logic
    for (int i = 0; i < n; i++)
    {
        if (a[i]==val)
        {
            a[i]=0;
        }
        
    }
    int last;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0)
        {
            last=a[i];
            a[i]=a[n-i];
            a[n-i]=last;
        }
        
    }
    
    //Printing the output
    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;

    return 0;
}