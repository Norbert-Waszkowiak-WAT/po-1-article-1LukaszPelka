#include <iostream>
#include <string>
#ifdef UNTILED_AUTHOR
#ifdef UNTILED_AUTHOR
using namespace std;
class Article{
    private:
    string title;
    Author author;
    int publicationYear; 
    string journal;
    pulic:
    Article()
    :title(""), (Author()), publicationYear(0), journal(""){};
    Article(string articleTitle, Author articleAuthor, int publicationYear, string yournalName)
    :title(articleTitle), author (articleAuthor), publicationYear (publicationYear), journal (journalName)
    Author(Article &other){}
    ;title(other.title), author(other.author), publicationYear (other.publicationYear), journal (other.journal){};
string getJournal(){
    return journal;
}
int getpublicationYear(){
    return publicationYear;
}

author getAuthor(){
    return Author;
}
string getTitle(){
    return title;
}
void displyInfo(){
    cout<<"sigma Blachaj";
}

}