#include <iostream>
#include <cstring>

char *read_word() {
    int size = 0;
    int max = 10;

    char *word = nullptr;

    char c;
    if (std::cin >> c) {
        word = (char *)std::malloc(max*sizeof(char));

        do {
            word[size++] = c;

            if (size == max) {
                max += 5;
                word = (char *)std::realloc(word, max*sizeof(char));
            }

        } while (std::cin.get(c) && !std::isspace(c));
        word[size] = '\0';
    }

    return word;
}

char **read_words(int *size) {
    *size = 0;
    int max = 0;

    //musimy ja zaalokoac
    char **words = nullptr;

    //wskaznik pomocniczy
    char *word = nullptr;
    // wczytywac koleje wyrazy
    while (word = read_word()){
        if (*size == max) {
            max += 5;
            words = (char **) std::realloc(words, max * sizeof(char *));
        }

        words[(*size)++] = word;
    }

    return words;
}

void sort(char *tab[], int size) {
    bool unordered;

    do {
        unordered = false;
        for (int i = 0; i + 1 < size; ++i) {
            if (std::strcmp(tab[i + 1], tab[i]) < 0) {
                //swap
                char *temp = tab[i + 1];
                tab[i+1] = tab[i];
                tab[i] = temp;

                unordered = true;
            }
        }

    } while (unordered);
}

int main() {
    int size;

    char **words = read_words(&size);
    sort(words, size);

    std::cout << size << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << words[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < size; ++i){
       std::free(words[i]);
    }

    std::free(words);

    return 0;
}
