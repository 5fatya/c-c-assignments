/*Problem P.17 Copy Constructor (3 points) Language: C++
Consider the declaration of the following classes: (please read carefully the given code):
class Book {
    private:
char ∗ title;
        int pages;
    public:
Book(const Book&);
Book(const char ∗ t, int p);
Book();
// ...
// setter and getter methods omitted
};
a) Write an implementation of the copy constructor for Book
b) Normally a copy constructor will be automatically created by the compiler if none is pro- vided. 
In short words, what does the compiler-created copy constructor do, 
and why should the programmer provide its own version for the class above?
*/





#include <cstring>

class Book {
private:
    char* title;
    int pages;

public:
    // Parametric constructor
    Book(const char* t, int p) {
        title = new char[strlen(t) + 1];
        strcpy(title, t);
        pages = p;
    }

    // Default constructor
    Book() : title(nullptr), pages(0) {}

    // Copy constructor
    Book(const Book& other) {
        title = new char[strlen(other.title) + 1];
        strcpy(title, other.title);
        pages = other.pages;
    }

    // Destructor
    ~Book() {
        delete[] title;
    }

    // ... (setter and getter methods omitted)
};
