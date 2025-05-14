#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int ind,val;
    cin>>ind;
    cin>>val;


    for(int i=n;i>=ind-1;i--)
    {
        a[i]=a[i-1];
    }
    a[ind-1]=val;
    n+=1;

   cout << "Updated value:\n";
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   return 0;
}
