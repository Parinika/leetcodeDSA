int m,ans=-1;
int l=0, h=nums.size()-1;
while(l<=h){
m=(l+h)/2;
//cout<<l<<" "<<m<<" "<< h<<" "<<endl;
//         if(key<nums[m]){
//             if(key<nums[l])
//                 l=m+1;
//             else
//                 h=m-1;
//         }
//         else if(nums[m]<key){
//             if(key>nums[h])
//                h=m-1;
//             else
//                 l=m+1;
//         }
//         else if(nums[m]==key){
//             ans=m;
//             break;
//         }
if(nums[m]==key){
ans=m;
break;
}
else if(nums[m]>nums[l] && nums[m]>nums[h]){
if(nums[m]>key && nums[l]<key){
h=m-1;
}
else{
l=m+1;
}
}
else if(nums[m]<nums[l] && nums[m]<nums[h]){
if(nums[m]<key && nums[h]>key){
l=m+1;
}
else{
h=m-1;
}
}
else{
if(nums[m]>key)
h=m-1;
else
l=m+1;
}
}
return ans;