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
    for (int i = 0; i < n; i++)
    {
            if (i==n-1)
            {
                a[i]=-1;
            }
        for (int j = i+1; j < n; j++)
        {
            if (a[i]<a[j])
            {
                a[i]=a[j];
            }
            
        }
        
    }
    //Output
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}