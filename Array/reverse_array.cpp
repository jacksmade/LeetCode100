#include <iostream>
#include<stack>
#include <vector>
using namespace std;
int main()
{
    vector<int>array={2,5,8,1,23,-2};
    int n = array.size();
    int j=n-1;
    int temp=0;
    for(int i=0;i<(n/2);i++)
    {
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
        j--;
    }
    for(int a:array)
    {
        cout<<a <<" ";
    }
}