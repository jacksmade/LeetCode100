#include <iostream>
#include<stack>
#include <vector>
using namespace std;
int main()
{
    stack<int> relation;
    vector<vector<int>> party={
    // matrix table h Horizontal me likha A,B,c or Verticle me A,B,C is example me A , B ko janta h to 1 
    {0, 1, 1},  
    {0, 0, 1},  
    {0, 0, 0} 
    };
    int n=party.size();
    relation.push(0);
    // logic if A knows B pop A(because celebrity know no one) and push B into stack if not know B dont pop A and not push B(because everybody knows)
    // celebrity so B cant be. 
    // do same for all and the one in stack will be the celebrity
    for(int i=0;i<n;i++)
    {
        if(party[relation.top()][i]==1)
        {
            relation.pop();
            relation.push(i);
        }
    }
    
    cout<<relation.top();
    return 0;
}