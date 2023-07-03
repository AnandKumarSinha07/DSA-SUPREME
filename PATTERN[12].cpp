#include <iostream>
using namespace std;
//HOLLOW PATTERN DIAMOND
int main()
 {
   
  int n;
  cin>>n;
  cout<<"ENTER N: "<<endl;
  //TOP PYRAMID
   for(int i=0;i<n;i++)
  {
    
    //SPACE
    for(int j=0;j<(n-i-1);j++)
    {
      cout<<" ";
    }
    //STAR
    for(int j=0;j<(2*i+1);j++)
    {
      if(j==0 || j==2*i)
         {
          cout<<"*";
         }
        else{
        cout<<" ";
          }
    }
      cout<<endl;
  }

 for(int i=0;i<n;i++)
 {
   //SPACES
   for(int j=0;j<i;j++)
   {
     cout<<" ";
   }
   //STAR
   
     for(int j=0;j<(2*n-2*i-1);j++)
     {//if first or last chracter
       if( j==0||j==2*n-2*i-2){
          cout<<"*";
       }
       else{
         cout<<" ";
       }
     }
     cout<<endl;
  
 }
   
  return 0;
}

