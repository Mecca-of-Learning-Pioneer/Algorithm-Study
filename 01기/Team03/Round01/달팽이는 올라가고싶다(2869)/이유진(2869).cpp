#include <iostream>
using namespace std;

int main()
{
    int D, N, H, result = 0; //��, ��,����, ��� 
    
    cin>>D>>N>>H;
    

    
    if((H-D)%(D-N)>0)
    {
        result++;
    }
    
    result += (H-D)/(D-N) + 1; 
    
    cout<<result;
    
    return 0;
}
