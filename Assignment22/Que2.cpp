#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

string fun(string str)
{

    string s = str;
    reverse(s.begin(),s.end());
    return s;
}




int main()
  {
  printf("enter a string ");
  string s;
cin>>s;
  string len = fun(s);
  cout<<"reverse of string "<<s <<"is "<<len<<endl;

  
  
  printf("\n");
  return 0;
  }