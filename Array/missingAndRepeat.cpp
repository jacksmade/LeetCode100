#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int>num={4, 3, 6, 2, 1, 1};
    int n=num.size();
    // array of size n+1 that contain all 1's when find number replace 1 with 0 
    vector<int> numbers(n+1,1);
    int missing=-1;
    int repeat=-1;
    for(int i=0;i<n;i++)
    {
        if(numbers[num[i]]!=0)
        {
            numbers[num[i]]=0;
        }
        else
        {
            repeat=num[i];
        }
    }
    for(int i=1;i<n;i++)
    {
        if(numbers[i]!=0)
        {
            missing=i;
            break;
        }
    }
    // Display the vector content (this is just for verification)
    cout<<"repeat : "<< repeat<<endl;
    cout<<"missing : "<<missing;
    return 0;
}
