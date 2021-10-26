#include<iostream>
using namespace std;

int main(){
    //Input goes here
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //Logic

    int digit=0;
    int num=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
    
    
    for (int j=i; a[j]>0; j++)
    {
        a[j]/=10;
        digit++;
        if (a[j]==0 && digit%2==0)
        {
            num++;
        }
    }  
    }
    cout<<num<<endl;

    
   
    
    

    return 0;
}