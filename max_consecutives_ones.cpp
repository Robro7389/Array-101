#include<iostream>
using namespace std;

int main(){
    //input goes here
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //logic

    int currlen=1;
    int maxlen=1;

    for (int i =1; i < n; i++)
    {
        if (a[i]==a[i-1])
        {
            currlen++;
            if (currlen>maxlen)
            {
                maxlen=currlen;
            }
            
        }
        else{
            currlen=1;
        }
    }
    //output goes here
    cout<<"Max length is- "<<maxlen<<endl;
    

    return 0;
}