#include "file_manager.hpp"
#include <fstream>

FileManager::FileManager(const std::string name){ c_fname = name; }

std::vector<std::string> FileManager::readFile(const std::string& filename) {
    std::ifstream file(filename);
    std::vector<std::string> lines;
    std::string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
    } else {
        // Handle error: unable to open file
        // This could be logging an error and/or throwing an exception
    }
    return lines;
}

void FileManager::writeToFile(std::string input){};
