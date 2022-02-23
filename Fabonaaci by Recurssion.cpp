#include<iostream.h>
#include,<conio.h>
#include<bits/stdc++.h>
int fib(int n)
using namespace std;

int main()
{
  int n=9;
  int fib(n);
  getchar();
  return 0;
}

int fib(int n)
{
  if(n<=1)
    return n;
  return fib(n-1)+fib(n-2);
}
