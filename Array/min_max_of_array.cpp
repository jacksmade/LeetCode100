#include <iostream>
#include<stack>
#include <vector>
using namespace std;
int main()
{
    
    int array[]={2,5,8,1,23,-2};
    int max=array[0];
    int min=array[0];
    int n = sizeof(array) / sizeof(array[0]);
    for(int i=0;i<n;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
        else if(array[i]>max)
        {
            max=array[i];
        }
    }
    cout<<"min : "<<min<<endl;
    cout<<"max : "<<max;
}