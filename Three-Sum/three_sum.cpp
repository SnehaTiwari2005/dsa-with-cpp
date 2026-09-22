#include<iostream>
using namespace std;
int main {
for(int i=0;i<n-2;i++){
if(i>0 && nums[i] == nums[i-1])
  continue;
int l=i+1;int r=n-1;
while(l<r) {
int sum = nums[i]+nums[l]+num[r];
if(sum == 0) {
res.add(arrays.aslist(nums[i];nums[l];nums[r])
while (l<r && nums[l] == nums[l+1])
  i++;
  while(l<r && nums[r] == nums[r-1])
     r--;
}
else {
l++;
}
}
}
return res;
}
