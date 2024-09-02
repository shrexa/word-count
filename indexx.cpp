#include <iostream>
#include <fstream>
// fstream class provides input and output operations like istream nd ostream
#include <string>

using namespace std;

int main()
{
    // welcome
    cout << "Welcome to my Project - Word Count" << endl << endl;


    // declaring and inputing File name
    string filename;
    cout << "Enter the name of your file : ";
    cin >> filename;
    cout << "\n";



    ifstream inFile(filename.c_str());
    // c_str() function is used to convert a string to a C-style string(array of chars)


    if (!inFile.is_open())
    {
        cerr << "Sorry! The File " << filename << " you opened may not exist.  \n"
             << endl;
        // cerr is the cout for errors
        return 1;
    }

    //  inFile.open ("Countcpp.txt" , ios::in);
    // open() - Opens the file to perform i/o operations 

    int wordCount = 0;
    string words;

    while (inFile >> words)
    // or getline(inFile,words)
    {
        ++wordCount;
    }

    cout << "The total word counts in your file  " << filename << " are : " << wordCount << endl << endl;;

    inFile.close();


    cout << "Thankyou ! Try next :)";

    return 0;
}
