#include <iostream>
#include <map>
#include <string>

class CivetDB {
        std::map<std::string, std::string> database;

    public:
        CivetDB() {
            std::cout << "CivetDB is ready to engage." << std::endl;
        }

        ~CivetDB() {
            std::cout << "Yawn... Time to sleep." << std::endl;
        }

        std::string Get(std::string key) {
            return database.count(key) ? database[key] : "";
        }

        int Put(std::string key, std::string value) {
            database[key] = value;
            return 1;
        }

        int Remove(std::string key) {
            if(database.count(key)) {
                database.erase(key);
                return 1;
            }
            return 0;
        }
};