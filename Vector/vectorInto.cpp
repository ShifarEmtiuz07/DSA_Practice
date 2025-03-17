#include <iostream>
#include<vector>
using namespace std;
int main(){

vector<int>vec={12,3,4,5,7};

vec.push_back(20);
for(int val:vec){
    cout<<val<<endl;
}
cout<<vec.back()<<endl;



}
