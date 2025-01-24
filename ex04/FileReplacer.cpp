#include "FileReplacer.hpp"

FileReplacer::FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2)
    : filename(filename), s1(s1), s2(s2) {}

bool FileReplacer::replaceContent() const {
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open input file: " << filename << std::endl;
        return false;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not create output file: " << outputFilename << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        outputFile << line;
        if (!inputFile.eof()) {
            outputFile << '\n';
        }
    }

    inputFile.close();
    outputFile.close();
    return true;
}
