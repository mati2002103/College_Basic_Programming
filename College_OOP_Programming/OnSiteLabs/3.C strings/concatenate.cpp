#include <iostream>
#include <string.h>

char* catenate(const char* str1,const char* str2)
{
    int len=strlen(str1)+strlen(str2)+1;
    char* text3 = (char *)std::malloc(len*sizeof(char));
    
    int size1 = 0;
    for(int i=0;str1[i];++i)
    {
       text3[i]=str1[i];
       size1 = i+1;
    }
    for(int i=0;str2[i];++i)
    {
        text3[size1++]=str2[i];

    }
    text3[size1] = '\0';
    return text3;
    
}


int main() {
char *string = catenate("pro", "duct");
std::cout << string << std::endl;
std::free(string);
return 0;
}