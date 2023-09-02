#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string filename;
  fstream myfile(filename.c_str()); // ifstream myfile(fileName.c_str());
  
  cout<<"Please enter the name of txt file : ";
  cin>>filename;
  cout<<"\n\n";
  myfile.is_open ("Countcpp.txt" , ios::in);
  if (myfile.is_open()){
      string words;//array?
      while(getline(myfile,words)){
      cout<< words<<endl;
      }
       myfile.close();
  }
  else if (!myfile.is_open())
    {
        cout << "Sorry! Could not open your file " << filename << endl;
        return 1;
    }
system("pause>0");
//   return 0;
}