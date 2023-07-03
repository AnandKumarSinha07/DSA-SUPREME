#include <iostream>
using namespace std;
//  FULL DYMOND
int main() {
   
  int n;
  cin>>n;
  cout<<"ENTER N: "<<endl;
  //TOP PYRAMID
   for(int i=1;i<=n;i++)
  {
    //SPACE
    for(int j=1;j<=(n-i);j++)
    {
      cout<<" ";
    }
    //STAR
    for(int j=1;j<=i;j++)
    {
      cout<<" *";
    }
    cout<<endl;
  }

   // SECOND INVERTED PYRAMID
  for(int i=1;i<=n;i++)
  {
  
    //SPACE
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
