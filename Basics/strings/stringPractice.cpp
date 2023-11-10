//experimentig with strings in cpp

#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;    

const int NAME_LENGTH_MAX = 10;

int main(int argc, char** argv)
{
    for(int i=0; i<argc; i++)
    {
        cout << argv[i] << endl;
    }

    char name[NAME_LENGTH_MAX] = "Filippo";

    for(int i=0; i<NAME_LENGTH_MAX; i++)
    {
        cout << name[i] << " ";

    }

    cout << "The length of the name is: " << strlen(name) << endl;

    cout << isupper(name[0]) << endl;

    cout << islower(name[0]) << " " << islower(name[1]) << endl;

    name [7] = 'p';
    name [8] = 0;

    cout << name << endl;

    cout << (name == "Filippop") <<endl; //this is not working because it compares a string to a pointer!

    if (std::strcmp(name, "Filippop") == 0) {
        printf("strcmp returns 0 if two strings are equal\n"); //this is something to remember
    } 
    else {
    // Code for unequal strings
    }


    string name2 = "Filippo";

    cout << name2.length() << endl;
    cout << name2.size() << endl;

    cout << (name2 == "Filippo") <<endl; //this is working because it compares two strings!

    string name3 = "Filippop";

    cout << (name3 == name) <<endl; //this works because it compares two strings! (opertaror overloading)

}