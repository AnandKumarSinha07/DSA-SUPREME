#include <iostream>
using namespace std;

int main() {
  int i,j,n;
  cin>>n;
// FIRST PART
  for(i=0;i<n;i++)
  {
    //STAR
    for(j=i;j<n;j++)
    {
      cout<<"*";
    }

  // SPACE
    for(j=0;j<2*i+1;j++)
    {
      cout<<" ";
    }

  //STAR
     for(j=i;j<n;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }


// BOTTOM PART
  for(i=0;i<n;i++)
  {
    //STAR
    for(j=0;j<i+1;j++)
    {
      cout<<"*";
    }
  
    //SPACE
    for(j=0;j<2*n-2*i-1;j++)
    {
      cout<<" ";
    }
    //STAR
    for(j=0;j<i+1;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }




  return 0;
}
