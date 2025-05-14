#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int ind;
    cout << "Delete array:\n";
    cin>>ind;

    for(int i=ind ;i<n ;i++)   //for position //for(int i=pos-1 ;i<n ;i++)
    {                                            //{ a[i]=a[i+1]; }
        a[i]=a[i+1];
    }
    n-=1;

       cout << "Updated array:\n";
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   return 0;
}

