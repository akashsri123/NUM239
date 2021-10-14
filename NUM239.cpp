#include<iostream>
using namespace std;
int func(int a)
{
     
     int c=0;
     int b=a%10;
     if(b==2 || b==3 || b==9)
     {
          c++;
     }
   return c;
   
}
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int l,r;
          int m=0;
          cin>>l>>r;
          for(int i=l;i<=r;i++)
          {
               int e=func(i);
               m=m+e;
          }
          cout<<m<<endl;
     }
     return 0;
}
