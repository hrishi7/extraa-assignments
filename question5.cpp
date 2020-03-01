
#include <iostream>
#include<set>
#include<iterator>

using namespace std;

bool isUnique(string firstname,set<char>fname){
     string::iterator s;
  for(s = firstname.begin() ; s < firstname.end(); s++){
      bool is_in = fname.find(*s) != fname.end();
      if(is_in){
          return false;
      }
      fname.insert(*s);
  }
  return true;
}

int main()
{
    string firstname = "Anuj";
    set<char> fname;
    int is_unque = isUnique(firstname,fname);
    if(is_unque){
        cout<<"Congrats It unique"<<endl;
    }else{
        cout<<"Oops its not Unique"<<endl;
    }
    return 0;
}
