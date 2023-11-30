#include<bits/stdc++.h>
using namespace std;

int main(){
    
  int n; // step 1

  cin>>n; //step 1

  int a[n]; // step-1

  for(int i=0; i<n; i++){ // n step o(n)

    cin>>a[i];
  } 

  int s=0; // step1 
  for(int i=0; i<n; i++){ //n step  o(n)
        
         s = s+ a[i];
    } 

  cout<<s<<endl;
    return 0;



//Total  O(n) + o(n) = o(2n) = o(n) and thats it
}