#include<iostream>
#include<string.h>
using namespace std;

int f1(string str)
{

  return str.length();
    
}




int main()
  {
  printf("enter a string ");
  string s;
cin>>s;
  int len = f1(s);
  cout<<"length of string is "<<len<<endl;

  
  
  printf("\n");
  return 0;
  }