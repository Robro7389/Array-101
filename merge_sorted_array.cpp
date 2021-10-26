#include<iostream>
using namespace std;

int main(){
    //Input
    int n,m;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
cin>>m;
int b[m];
for (int i = 0; i < m; i++)
{
    cin>>b[i];
}

    //Logic
int pn=n;
 int c[100];
 for (int i = 0; i < n; i++)
 {
     c[i]=a[i];
 }
 for (int i = 0; i < m; i++)
 {
     c[n]=b[i];
     n++;
 }

 int len=(pn)+(m);
 int temp;
 for (int i = 0; i < len-1; i++)
 {
     for (int j = i+1; j < len; j++)
     {
         if (c[i]>c[j])
         {
             temp=c[i];
             c[i]=c[j];
             c[j]=temp;
         }
         
     }
     
 }
    //Printing the output
    for (int i = 0; i < len; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    
 
 
 


    return 0;
}