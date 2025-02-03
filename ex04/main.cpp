/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:24:42 by rgiambon          #+#    #+#             */
/*   Updated: 2025/02/03 13:25:20 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>

void replaceStrings(const std::string& inputFile, const std::string& s1, const std::string& s2) {
    // Open the input file
    std::ifstream inFile(inputFile);
    if (!inFile) {
        std::cerr << "Error: Cannot open file " << inputFile << std::endl;
        return;
    }

    // Open the output file
    std::ofstream outFile(inputFile + ".replace");
    if (!outFile) {
        std::cerr << "Error: Cannot create output file " << inputFile << ".replace" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        size_t pos = 0;
        // Replace occurrences of s1 with s2 in the line
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outFile << line << std::endl; // Write the modified line to the output file
    }

    inFile.close();
    outFile.close();
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Wrong number of arguments." << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty() || s2.empty()) {
        std::cerr << "Error: Strings cannot be empty." << std::endl;
        return 1;
    }

    replaceStrings(filename, s1, s2);
    return 0;
}
