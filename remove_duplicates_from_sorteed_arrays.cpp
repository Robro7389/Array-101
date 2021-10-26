#include<iostream>
using namespace std;

int main(){
    //input 
    int n;;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    // Logic 

    int mn=INT_MAX;
    int mx=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        mn=min(a[i],mn);
        mx=max(a[i],mx);
    }
    
    int c[100];
    int dash=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]==a[j])
            {
               a[j]=dash;
            }
            
            
        }

        int temp;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                
                
                if (a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                
            }
            
        }
        
        //Printing the output
    }
    for (int i = 0; i < n; i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}