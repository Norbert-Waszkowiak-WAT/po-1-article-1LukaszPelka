#ifdef UNTILED_CHAPTER_H
#ifdef UNTILED_CHAPTER_H
#include <iostream>
#include <string>
using namespace std:
class Chapter{
private:
string title;
Author author;
int chapterNumber;

public:
Chapter()
:title(""), author(Author()), chapterNumber(0){};
Chapter(string chapterTitle, Author chapter Author, int number);
title(chapterTitle), author(chapterAuthor), ChapterNumber(number){};
Chapter (Chapter &other)
:title(other.title), author (other.author),chapterNumber(other.chapterNumber){};
Chapter(Article &other)
:title(article.title),author(article.author),chapterNumber(1){};
string getTitle(){
    return title;
}
Author getAuthor(){
    return author;
}
int getChapterNumber(){
    return chapterNumber;
}
void displayInfo(){
    cout<<"Chapter"<<chapterNumber<<": "<<title<<" by "<<author.getName()<<" "<<author.getSurname()<<endl;
}

}

