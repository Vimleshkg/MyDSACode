#include<iostream>
using namespace std;
int search(int arr[],int n,int key)
{

int s=0,e=n;

        for(s=0;s<=e;)
        {

        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }


}
return -1;
}
int main()
{
    int arr[]={23,34,55,67,88,99,198};
    int n=sizeof(arr)/sizeof(0);
    cout<<"array of element is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    int key;
    cout<<"enter the key=";
    cin>>key;
    cout<<search(arr,n,key)<<endl;
    return 0;
}
