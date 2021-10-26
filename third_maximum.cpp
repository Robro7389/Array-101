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
    int mx=INT_MIN;
    int mx2=INT_MIN;
    int mx3=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx=max(a[i],mx);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=mx)
        {
            mx2=max(a[i],mx2);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=mx && a[i]!=mx2)
        {
            mx3=max(a[i],mx3);
        }
        
    }
    cout<<"Third Maximum- "<<mx3<<endl;

    return 0;
}