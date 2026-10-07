#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int> &nums)
{
    int pos = 0;
    for(int i=0; i< nums.size(); i++)
    {
        if(nums[i] != 0)
        {
            if(pos != i)
            {
                nums[pos] = nums[i];
            }
            
    
    
            pos++;
        }
    }
    for(int i= pos; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
}
int main()
{
    vector<int> v = {0,1,0,3, 12};
    moveZeros(v);
    for(int num : v)
        cout << num << " ";
    cout << endl;
    return 0;
}
