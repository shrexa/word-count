#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ifstream myfile;
//   string filename;
  cout<<"please enter the name of txt file : ";
//   cin>>filename;
  myfile.open ("sudhan.txt" , ios::in);
  if (myfile.is_open()){
      string words;//array?
      while(getline(myfile,words)){
      cout<< words<<endl;
      }
       myfile.close();
  }
system("pause>0");
//   return 0;
}