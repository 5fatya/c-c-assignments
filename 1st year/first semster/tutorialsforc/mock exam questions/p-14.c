#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("generate.txt", "wb"); // Open the file in binary write mode
    if (file == NULL) {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }

    // Data to be written to the file
    char data[10][6] = {"a aa\n", "b bb\n", "c cc\n", "d dd\n", "e ee\n", 
                        "f ff\n", "g gg\n", "h hh\n", "i ii\n", "j jj\n"};

    // Write each line to the file
    for (int i = 0; i < 10; i++) {
        fwrite(data[i], sizeof(char), 6, file); // Each line has 6 characters including '\n'
    }

    fclose(file); // Close the file

    return 0;
}
