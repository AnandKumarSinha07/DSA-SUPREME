#include <iostream>
using namespace std;
// PATTERN 1
int main()
 {
  int i,j,n;
  cout<<"Enter N: "<<endl;
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cout<<" *";
    }
    cout<<endl;
  }
  return 0;
}

