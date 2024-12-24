









#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

  int countvovel(string str){
    
   int c = 0 ;
   for (int i = 0 ; i<str.length();  i++){
     char ch = tolower(str[i]);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        c++;
    }
   }
    return c;
}


int main()
  {
  printf("enter a string ");
  string s,p;
  cin>>s;
 

 int cou = countvovel(s);
  cout<<"total vovel " <<"is "<<cou<<endl;

  
  
  printf("\n");
  return 0;
  }




        