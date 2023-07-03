#include <iostream>
using namespace std;
//PATTERN 14 
int main() {
  int i,j,n;
  cin>>n;
  for(i=0;i<n;i++)
  {
   // int count=1;
    for(j=0;j<i+1;j++)
    {
      cout<<i+1;
    
        if(j!=i){
        cout<<"*";
         }
    }
    cout<<endl;
  }
 


 //SECOND HALF
 for(i=0;i<n;i++)
 {
   for(j=0;j<n-i;j++)
   {
     cout<<n-i;
     if(j!=n-i-1)
     {
       cout<<"*";
     }
    
   }
  cout<<endl;

 }
  return 0;
}
