#include <iostream>
using namespace std;
//FULL PYRAMID
int main() {
   
  int n;
  cin>>n;
  cout<<"ENTER N: "<<endl;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=(n-i);j++)
    {
      cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
      cout<<" *";
    }
    cout<<endl;
  }
  return 0;
}
