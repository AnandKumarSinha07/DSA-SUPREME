#include <iostream>
using namespace std;
// INVERTED FULL PYRAMID
int main() {
   
  int n;
  cin>>n;
  cout<<"ENTER N: "<<endl;
  for(int i=1;i<=n;i++)
  {

    for(int j=1;j<=(i-1);j++)
    {
      cout<<" ";
    }
    // STAR
    for(int j=i;j<=n;j++)
    {
      cout<<" *";
    }
    cout<<endl;
  }
  return 0;
}
