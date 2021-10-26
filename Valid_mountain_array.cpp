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
    int mn=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mx=max(a[i],mx);
        mn=min(a[i],mn);
    }

    bool check=true;
    int top;
    for (int i = 1; i <= mx; i++)
    {
        if (a[i-1]<a[i]<=mx)
        {
            check=true;
        }
        else if(a[i]==a[i-1] || a[i]==a[i+1]){
            check=false;
            break;
        }
        if (a[i]==mx)
        {
            top=i;
        }
    }
    for (int i = top; i < n; i++)
    {
        if (a[i-1]>a[i]>a[i+1])
        {
            check=true;
        }
        else if (a[i]==a[i-1] || a[i]==a[i+1])
        {
            check=false;
            break;
        }
        
        
    }
    if (check==true)
    {
        cout<<"Mountain Array"<<endl;
    }
    else{
        cout<<"Not a Mountain Array"<<endl;
    }
    
    //_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+

    return 0;
}