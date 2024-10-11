#include <iostream>
#include <fstream>
#include <cstring>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
void concatenate_files(int n, const char *filenames[], const char *output_filename) {
    std::ofstream output_file(output_filename, std::ios::binary);

    if (!output_file.is_open()) {
        std::cerr << "Failed to open output file " << output_filename << std::endl;
        exit(1);
    }

    for (int i = 0; i < n; ++i) {
        std::ifstream input_file(filenames[i], std::ios::binary);

        if (!input_file.is_open()) {
            std::cerr << "Failed to open input file " << filenames[i] << std::endl;
            exit(1);
        }

        // Copy file contents to output file
        output_file << input_file.rdbuf();

        // Add newline character to separate file contents
        output_file << '\n';

        input_file.close();
    }

    output_file.close();
}

int main() {
    int n;
    std::cout << "Enter the number of files to concatenate: ";
    std::cin >> n;

    const char *filenames[n];

    std::cout << "Enter the names of the files to concatenate: ";

    for (int i = 0; i < n; ++i) {
        char filename[256];
        std::cin >> filename;
        filenames[i] = filename;
    }

    concatenate_files(n, filenames, "concatn.txt");

    std::cout << "Concatenation completed successfully. The result is stored in concatn.txt." << std::endl;

    return 0;
}