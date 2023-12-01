#include<bits/stdc++.h>
using namespace std;

int main(){
    

 // Find the value;
 //It will use complexitiy of O(N);

   vector<int> v = {1,2,3,4,5,123,5,5,3,23,6,2,2};

     
  auto  it = find(v.begin(), v.end(), 5534);
   
   if(it == v.end()){
    cout<<"Not found";
   }
   else{
    cout<<"FOund";
   }


    return 0;

}