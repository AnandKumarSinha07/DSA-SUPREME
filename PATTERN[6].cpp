#include <iostream>
using namespace std;
// PATTERN 6
int main()
{
 
  int i,j,n;
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
      cout<<j;
    }
    cout<<endl;
  } 
  return 0;
}
