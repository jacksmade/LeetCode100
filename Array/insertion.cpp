#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
    for(int i=1;i<n;++i)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    
}
void print(int array[],int n)
{
    for( int i=0;i<n;i++)
{
    cout<<array[i]<<" "<<endl;
}
}
int main()
{
    int array[]={1,5,9,10,0,2,4};
    int size=sizeof(array) / sizeof(array[0]);
    insertion(array,size);
    print(array,size);
    return 0;
}