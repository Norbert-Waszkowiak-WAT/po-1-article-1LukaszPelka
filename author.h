#ifndef UNTITLED1_AUTHOR_H // if not defined
#define UNTITLED1_AUTHOR_H //define

#include <string>

using namespace std;

class Author {
private:
    string name;
    string surname;
public:
    Author() = default;

    Author(const string& name, const string& surname);

    void print();

    string toString() const;

    const string &getName() const;

    const string &getSurname() const;
};


#endif // end the if