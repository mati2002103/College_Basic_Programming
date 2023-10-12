#include <iostream>

//malloc, realloc, free wszystko z std



 int* getints(int* size)
{
    *size = 0;
    int maxLen = 1;
    int input;
    int* ptr = (int *) std::malloc(maxLen *sizeof(int));
    while(std::cin >> input)
    {
        if(*size == maxLen)
        {
            maxLen +=20;
            ptr = (int *) std::realloc(ptr,maxLen);
        }
        ptr[*size] = input;
        (*size)++;
    }
    return ptr;

}


int main() {
    int size;
    int* table = getints(&size);
    for (int index = 0; index < size;) {
    std::cout << table[index++] << " ";
    }
    std::cout << std::endl;
    std::free(table);
return 0;
}
