#include<iostream>
using namespace std;
int main()
{
  char str[40];
  int a,b,avg;
  cout<<"enter your name";
  cin>>str;
  cout<<"enter the values of two subjects";
  cin>>a>>b;
  avg=(a+b)/2;
  cout<<"your name is"<<str;
  cout<<endl<<"and your avg is"<<avg;
}
