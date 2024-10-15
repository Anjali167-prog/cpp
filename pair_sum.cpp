#include <iostream>
#include<vector>
using namespace std;
vector<int>result(vector<int>nums, int target){
   
    int i=0;
    int j=nums.size()-1;
    vector<int>ans;
   
    while(i<j){
       
        int pair_sum = nums[i] + nums[j];
        if(target<pair_sum){
            j--;
        }    
        else if (target>pair_sum){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            break;
            
        }
    }
    return ans;
}
int main() {
    vector<int>vec= {2,7,11,15};
    vector<int>ans = result(vec,10);
     if (!ans.empty()) {
        cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No valid pair found" << endl; // Message if no pair is found
    }
    
    
  
    return 0;
}
