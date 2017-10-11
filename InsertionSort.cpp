#include<iostream>
#include<conio.h>


using namespace std;

 int main()
 {
     int a[20],i,j,key,n;
     cout<< "Enter the number of elements"<<endl;
     cin>>n;
     cout<< "Enter the number"<<endl;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }

     for(i=1;i<n;i++)
     {
         key=a[i];
         j=i-1;
         while(a[j]>key && j>=0 )
         {
             a[j+1]=a[j];
             j--;
         }
         a[j+1]=key;
     }

     cout<< "Sorted array"<<endl;
     for(i=0;i<n;i++)
     {
         cout<<a[i];
     }

     return 0;
 }
