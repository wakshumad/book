#include <iostream>
#include <vector>
#include <string>

class bookenv
{
    private:
    std::string title;
    int pages;
    
    public:
    bookenv();
    bookenv(const std::string& atitle, int apages);
    void printdata();
    std::string gettitle() const;
    int getpages() const;
    void settitle(const std::string& atitle);
    void setpages(int apages);

};
bookenv::bookenv() : title{"Default Title"}, pages{0}
{

}
bookenv::bookenv(const std::string& atitle, int apages) : title{ atitle }, pages{apages}{

}

void bookenv::printdata()
{
    std::cout << "The book tilte is :" << title << ", and the number of pages is :"<< pages << '\n';
}

std::string bookenv::gettitle() const{
    return title;
}

int bookenv::getpages()const{
    return pages;
}

void bookenv::settitle(const std::string& atitle){
    title = atitle;
}
void bookenv::setpages(int apages){
    pages = apages;
}

int main()
{
bookenv defaultbook;
std::cout << "Default constructor invoked." << '\n';

bookenv myBook{"FikirEskeMekabir",123};
std::cout << "User-Provided constructor invoked."<<'\n';
myBook.printdata();
std::cout << "The book title is :" << myBook.gettitle() << '\n';
std::cout << "The number of pages is : " << myBook.getpages()<<'\n';
std::cout << "settting the new title..." << '\n';
myBook.settitle("New Book Title");
std::cout<< "Setting the new number of pages ..." << '\n';
myBook.setpages(456);
myBook.printdata();
std::cout << "\nCreating an inventory of books... " << '\n';
std::vector<bookenv> v = {
bookenv("Sample Book Title 1", 100),
bookenv("Sample Book Title 2", 200),
bookenv("Sample Book Title 3", 300),
bookenv("Sample Book Title 4", 400),
bookenv("Sample Book Title 5", 500),
};
for (auto& el : v)
{
el.printdata();
}
}