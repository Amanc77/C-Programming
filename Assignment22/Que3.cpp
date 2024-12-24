#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

bool compair(string str, string str2)
{

   if(str == str2 )
      return true;
   else 
      return false;
} 




int main()
  {
  printf("enter 1st and 2nd string ");
  string s,p;
  cin>>s;
  cin>>p;

  bool check = compair(s,p);
  cout<<"check str1 and2 for equeal" <<"is "<<check<<endl;

  
  
  printf("\n");
  return 0;
  }