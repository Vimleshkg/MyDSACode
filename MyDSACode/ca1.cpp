/*Insertion and deletion of item  using array*/
#include<iostream>
using namespace std;
void display(int arr1[],int s)
{
    for(int i=0;i<=s;i++)
  {
    cout<<arr1[i]<<endl;

  }

}int inser(int arr1[],int n,int ind,int s)
{
    for(int i=s;i>=ind-1;i--)
    {
        arr1[i+1]=arr1[i];

    }
    arr1[ind]=n;
return s;

}
int delet(int arr1[],int n1,int s)
{  int i;
for (i=0; i<s; i++)
{
     if (arr1[i] == n1)
        break;
}

if (i<s)
{
    s=s-1;
    for (int j=i; j<s; j++)
        arr1[j] = arr1[j+1];

}
 return s-1;

}

int main()
{ int arr1[6];
    int arr[4]={10,20,30,40};
    int s=sizeof(arr)/sizeof(0);

    cout<<"element is="<<endl;
    for(int i=0;i<s;i++)
  {arr1[i]=arr[i];
    cout<<arr[i]<<endl;
  }
  int n,n1,ind,ind1;
    cout<<"enter the number "<<endl;
    cin>>n;
cout<<"enter the index"<<endl;
cin>>ind;
s=inser(arr1,n,ind,s);
cout<<"updated element is="<<endl;
 display(arr1,s);

 cout<<"enter the number to delete "<<endl;
    cin>>n1;


    s=delet(arr,n1,s);
    cout<<"array is deleted"<<endl;
    display(arr,s);

}
