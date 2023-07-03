#include <iostream>
using namespace std;
// PATTERN 5 
int main()
{
 
  int i,j,n;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      cout<<j;
    }
    cout<<endl;
  } 
  return 0;
}
