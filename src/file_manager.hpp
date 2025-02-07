#pragma once
#include <string>
#include <vector>

class FileManager{
    std::string c_fname;
    FileManager(const std::string name);
    std::vector<std::string> readFile(const std::string& filename);
    void writeToFile(std::string input);
};
