#include <iostream>
#include <string>
using namespace std;
#ifdef UNTITLED_AUTHOR
#ifdef UNTITLED_AUTHOR
class Author{
    private:
    string name;
    string surname;

    public:
    Author():
    Author(string name, string surname)
    :name(name), surname (surname){};
    string getSurname{}{
          return surname;
    }
    string getName{}{
        return name;
    }
    string tosString{}{
        return name + " " + surname;
    }
    void print{}{
        cout<< name<<" "<<surname<<endl;
    }

};
