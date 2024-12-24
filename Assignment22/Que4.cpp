#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

string toupperr(string str){
    
    transform(str.begin(), str.end() , str.begin(), ::toupper);
    return str;
}


int main()
  {
  printf("enter a string ");
  string s,p;
  cin>>s;
 

 string toupperrr = toupperr(s);
  cout<<"upper case " <<"is "<<toupperrr<<endl;

  
  
  printf("\n");
  return 0;
  }