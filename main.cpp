#include <iostream>
#include "find.h"
#include "Book.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    int feld[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    char feldC[20] = {'a','b','c','d','e','f','g','h','G','G','D','S','A','E','G','N','H','R','W','T'};

    int suche = 22;
    std::cout<< find(feld,20,suche)<< std::endl;
    suche = 2;
    std::cout<< find(feld,20,suche)<< std::endl;
    char suche2 = 'g';
    std::cout<< find(feldC,20,suche2)<< std::endl;
    suche2 = 'z';
    std::cout<< find(feldC,20,suche2)<< std::endl;

    auto book1=Book("Goethe", "Faust");
    auto book2=Book("Schiller", "Die Räuber");
    auto book3=Book("Shakespeare", "Hamlet");
    Book books[]={book1, book2, book3};
    std::cout<<find(books, 3, book1)<<std::endl;


    return 0;
}