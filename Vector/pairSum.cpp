#include <iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>nums,int target){

int sz=nums.size();
vector<int>ans;
/*for(int i=0;i<sz;i++){

    for (int j=i+1;j<sz;j++){
        if(nums[i]+nums[j]==target){
            ans.push_back(i);
            ans.push_back(j);
        }
    }


}*/

//optimize//

int i=0,j=sz-1;

while(i<j){
        int pairSum=nums[i]+nums[j];

    if(pairSum>target){
        j--;
    }else if(pairSum<target){
    i++;
    }else{
    ans.push_back(i);
    ans.push_back(j);
    return ans;
    }
}


}

int main(){

vector<int>vec={2,7,11,15};
int target=17;
 vector<int>ans=pairSum(vec,target);
cout<<ans[0]<<" "<<ans[1]<<endl;



}
