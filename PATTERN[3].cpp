#include <iostream>
using namespace std;
// PATTERN 3
int main() {
  int i,j,n;
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
