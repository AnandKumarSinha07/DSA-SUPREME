#include <iostream>
using namespace std;
//PATTERN 15
int main() {
  int i,j,n;
  cin>>n;
  // simple printing  
  for(i=0;i<n;i++)
  { 
    for(j=0;j<i+1;j++)
    {
      int ans=j+1;
      char ans1=ans+'A'-1;
      cout<<ans1;
    }

   // REVERSE PRINTING
    for(int j=i;j>=1;j--)
    {
      int ans2=j+1;
      char ans3=ans2+'A'-1;
      cout<<ans3;
    }
    cout<<endl;
  }
  return 0;
}
