#include<iostream>

using namespace std;
class Book{
    public:
    string title;
    string author;
    int pages;
    Book(string aTitle, string aAuthor, int  aPages ) {
     title=aTitle;
     author=aAuthor;
     pages=aPages;
    }
    
    Book()
    {
        title="No Title";
        author="No Author";
        pages=0;

    } 


};
int main()
{ 
   Book book1("Harry Potter", "JK Rowling",500);
      Book book2("Lord of thr Rings", "Tolkein",700);
Book book3;
cout<<book3.title<<endl;





return 0;
}