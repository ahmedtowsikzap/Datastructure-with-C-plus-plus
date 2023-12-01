#include<bits/stdc++.h>
using namespace std;

int main(){
    

     vector<int> v = {1,2,3,4,5,123,5,5,3,23,6,2,2};   //O(N);

     replace(v.begin(), v.end()-1, 2, 100);

     for(int x: v){
        cout<<x<<" ";
     }

    return 0;

}