#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // vector<int> v; type 1 only size o(1);
    //vector<int> v(5); automatically declare the size of it which is 5 in this case!!
    // vector<int> v(5, 10); It's 5 size array but in every position it has the value of 10 in it!!!!
    vector<int> v2(5,100);
     vector<int> v(v2);
    for(int i=0; i<v.size(); i++){

        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();

    return 0;

}