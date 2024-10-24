#include <iostream>
#include <vector>
using namespace std;
 pair<int,pair<int,int>> kadanealgo(vector<int>& arr)
 {
    int curr_sum=arr[0];
    int max_sum=arr[0];
    int start=0;
    int end=0;
    int temp_start=0;
    for (int i=1;i<arr.size();i++)
    {
        if(arr[i]>arr[i]+curr_sum)
        {
            curr_sum=arr[i];
            temp_start=i;
        }
        else
        {
            curr_sum=arr[i]+curr_sum;
        }
        if(curr_sum>max_sum)
        {
            max_sum=curr_sum;
            start=temp_start;
            end=i;
        }
    }
 }
int main()
{
    return 0;
}