#include<iostream>
#include<string>
using namespace std;

class book{
     public : 
     string title_name;
     string author_name;

     book( string title,string author){

     title_name = title;
     author_name = author;
     cout<<"Title of the book is : "<<" "<< title<<endl;
     cout<<"Author name of the book is : "<<" "<< author<<endl;
     }

};
class Ebook:public book{
    public:
   int file_size;
   
   Ebook( string title,string author ,int fs ):book( title, author){
     file_size=fs;
    cout<<"file size is"<<" "<<fs<<endl;
   }
};

class printedbook:public book{
    public:
   int page_count;
   
   printedbook( string title,string author ,int page_c ):book( title, author){
     page_count=page_c;
    cout<<"Number of pages in the book is"<<" "<<page_c<<endl;
   }
};

int main(){

    printedbook p1("Mathematics","kunal",921);
    printedbook p2("Science","mitanshu",1221);
    Ebook e1("Mathematics","kunal",1000);
    Ebook e2("science","mitanshu",2000);
    book b1("mathematics","kunal");
    book b2("science","mitanshu");
    return 0;
}