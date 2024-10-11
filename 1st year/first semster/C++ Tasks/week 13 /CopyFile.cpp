#include <iostream>
#include <fstream>
#include <string>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

int main() {
    // Read the file name from the user
    std::cout << "Enter the name of the file: ";
    std::string filename;
    std::cin >> filename;

    // Open the input file
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }

    // Extract the file extension
    size_t dotPos = filename.find_last_of('.');
    std::string extension = (dotPos != std::string::npos) ? filename.substr(dotPos) : "";

    // Generate the output file name
    std::string outputFilename = filename.substr(0, dotPos) + "_copy" + extension;

    // Open the output file
    std::ofstream outputFile(outputFilename);
    if (!outputFile.is_open()) {
        std::cerr << "Error creating output file." << std::endl;
        return 1;
    }

    // Copy content from input file to output file
    char ch;
    while (inputFile.get(ch)) {
        outputFile.put(ch);
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    std::cout << "File copied successfully. New file name: " << outputFilename << std::endl;

    return 0;
}