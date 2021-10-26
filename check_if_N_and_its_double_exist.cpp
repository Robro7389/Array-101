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

    bool check=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
           if (a[i]==2*a[j])
            {
                check=true;
                break;
            }
            
        }
        
    }
    //Output
    if (check==true)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    
    
    

    return 0;
}