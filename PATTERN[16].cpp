#include <iostream>
using namespace std;
//DEBIGGING EXERCISE QUESTION 16
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(j==i+1||i==0||j==n)
            {
                cout<<j;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
