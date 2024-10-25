#include <iostream>
#include<stack>
#include <vector>
using namespace std;
int calculate_area(int left_p,int right_p, vector<int>& histogram)
{
    int area;
    int width=right_p-left_p;
    area=width*min(histogram[left_p],histogram[right_p]);
    return area;
}
int main()
{
    
    vector<int>histogram={1,8,6,2,5,4,8,3,7};
    int n=histogram.size();
    int left_p=0;
    int right_p=n;
    int current_area=0;
    int max_area=0;
    while(left_p!=right_p)
    {
        current_area=calculate_area(left_p,right_p,histogram);
        if(current_area>max_area)
        {
            max_area=current_area;
        }
        if(histogram[left_p]<histogram[right_p])
        {
            left_p++;
        }
        else 
        {
            right_p--;
        }
    }
    cout<<"total water is : "<<max_area<< endl;
}