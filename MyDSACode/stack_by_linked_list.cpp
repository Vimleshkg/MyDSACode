#include<iostream>

using namespace std;
int que(int arr[],int s)
{
    int f=-1,r=-1;
    while(1)
    {
        if(f==0 && r==s-1)
        {
            cout<<"overflow"<<endl;
           break;
        }
        else {
                f=0;
            r++;
            arr[r]=5;
            break;
        }

    }
   return arr[s];
}
void display(int arr[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int s=5;
    int arr[s];


    arr[s]=que(arr,s);
    display(arr,s);

}

