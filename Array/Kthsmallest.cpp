#include <iostream>
#include<stack>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>array={2,5,8,1,9,10};
    sort(array.begin(),array.end());
    cout<<"Enter kth number to see the smallest number ";
    int num;
    cin>>num;
    cout<<"small : "<<array[num]<<endl;
    cout<<"Enter kth number to see the largest number ";
    cin>>num;
    cout<<"large : "<<array[num];
    
}