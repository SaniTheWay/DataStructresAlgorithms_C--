// Question : _____
// Question Link : _____
// Approach: _____
// status : _____

#include <iostream>
#include <vector>
using namespace std;

int main(){
  int A[]={2,1,5,3,7,6,9,7,0};
int k = 9, n = sizeof(A)/sizeof(A[0]),i=0;
  for( i; i<n; i++)
  {
      if(A[i]==k)
      {
          cout<<"k at position: "<<i<<endl;
          break;
      }
  }
  if(i==n)cout<<"Not present!";

return 0;
}