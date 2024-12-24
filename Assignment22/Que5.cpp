#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

string tolowerr(string str){
    
    transform(str.begin(), str.end() , str.begin(), ::tolower);
    return str;
}


int main()
  {
  printf("enter a string ");
  string s,p;
  cin>>s;
 

 string lowerrrr = tolowerr(s);
  cout<<"lower case " <<"is "<<lowerrrr<<endl;

  
  
  printf("\n");
  return 0;
  }