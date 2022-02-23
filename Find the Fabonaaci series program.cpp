#include<iostream.h>
#include<conio.h>
using namespace std;

int main()
{
  int n=10;
  int a=0,b=1;
  int nextnumber;
  
  cout<<"a is"<<a<<"b is"<<b<<endl;

  
  for(int i=2; i<n; i++)
  {
    nextnumber=a+b;
    a=b;
    b=nextnumber;
    
    cout<<"Next number is"<<nextnumber<<endl;
    
  }
return 0;
}
