









#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;
  
  int checkindex(string str, char ch2){

  bool found = false;
   for (int i = 0 ; i<str.length();  i++){
    char ch = tolower(str[i]);
    if(ch == ch2)
     {
        found = true;
       return i;
     }
    }
    if(found == 0)
       return -1;


   }
    



int main()
  {
  printf("enter a string ");
  string s,p;
  cin>>s;
 
  char ch;
  cout<<"now enter the char for check index";
  cin>>ch;
 int cou = checkindex(s ,ch);
  cout<<"index of " <<ch<<" is "<<cou<<endl;

  
  
  printf("\n");
  return 0;
  }




        