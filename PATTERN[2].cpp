#include <iostream>
using namespace std;
// PATTERN 2
int main() {
  int i,j,row_count,col_count;
  cin>>row_count;
  cin>>col_count;
  for(i=0;i<row_count;i++)
  {
    if(i==0 || i==row_count-1)
    {
     for(j=0;j<col_count;j++)
     {
       cout<<"*";
     }
    }

  else
  {
    cout<<"*";
    for(i=0;i<col_count-2;i++)
    {
      cout<<" ";
    }
    cout<<"*";
  }
  cout<<endl;
  }
  return 0;
}
