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
    //Logic
    int missing=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i!=a[j])
            {
              missing++;
            }

            
        }
        if (missing==n)
        {
            cout<<i<<" ";
            missing=0;
        }
        else{
            missing=0;
        }
        
        
    }
    cout<<endl;
    
    return 0;
}