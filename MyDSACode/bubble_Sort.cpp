#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,55,22,13,15};
    int n=sizeof(arr)/sizeof(0);
    int counter=1;
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";

    }
    cout<<endl;
    for(int i=0;i<n;i++){
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

        }
    }


    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }


}
