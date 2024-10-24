#include <iostream>
#include<stack>
#include <vector>
using namespace std;
int main()
{
    int array[]={0,6,5,0,1,1,9,0,6};
    int n=sizeof(array)/sizeof(array[0]);
    int left_p=0;
    int right_p=n-1;
    int leftMax=array[0];
    int rightMax=array[n-1];
    int total_water=0;
    int current=0;
    while(left_p!=right_p)
    {
        if(array[left_p]<array[right_p])
        {
            left_p++;
            leftMax = max(leftMax, array[left_p]);
            current=leftMax-array[left_p];
            total_water=total_water+current;
        }
        else 
        {
            right_p--;
            rightMax = max(rightMax, array[right_p]);
            current=rightMax-array[right_p];
            total_water=total_water+current;

        }
    }
    cout<<"total water is : "<<total_water;
}