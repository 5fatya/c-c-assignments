#include <stdio.h>
#include <stdlib.h>

struct river {
    char name[40];
    int length;
    int drainage_area;
};

int compare(const void *p1, const void *p2) {
    const struct river *elem1 = (const struct river *)p1;
    const struct river *elem2 = (const struct river *)p2;
    return elem2->length - elem1->length; // Sort in descending order by length
}

int main() {
    struct river arr[30];
    int n = 0;

    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening data.txt.\n");
        return 1;
    }

    while (n < 30 && fscanf(file, "%39s %d %d", arr[n].name, &arr[n].length, &arr[n].drainage_area) == 3) {
        n++;
    }
    fclose(file);

    qsort(arr, n, sizeof(struct river), compare);

    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        fprintf(stderr, "Error opening output.txt.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(outputFile, "%s %d %d\n", arr[i].name, arr[i].length, arr[i].drainage_area);
    }

    fclose(outputFile);

    return 0;
}



