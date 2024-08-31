#include <iostream>
#include "Civet.h"

int main() {
    CivetDB db;
    db.Put("1", "First element");
    db.Put("2", "Go on");
    db.Put("Third is a string", "How will you handle this?");
    std::cout << db.Get("Third is a string") << std::endl;
    db.Remove("1");

    std::cout << "Just initialised the DB" << std::endl;

    return 0;
}