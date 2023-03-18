#include<iostream>
using namespace std;
int main()
{
    int i=0, arr[]={14,34,54,76,88};
    int n=sizeof(arr)/sizeof(0);
    cout<<"Array traversal using normal for loop"<<endl;
    while(i<n)
    {
        cout<<arr[i]<<endl;;
        i++;

    }
      cout<<"using range based for loop method for array traversal"<<endl;
      for(int x : arr)
        cout<<x<<endl;


    return 0;
}

