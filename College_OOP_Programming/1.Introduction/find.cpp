#include <iostream>

int* find(int *tabStart,int *tabEnd,int number)
{

    for(int *ptr = tabStart;ptr!=tabEnd;++ptr )
    {
         if (*ptr == number) {
            return ptr;
        }
       
    }
    return tabEnd;

}
const int* find(const int *tabStart,const int *tabEnd,int number)
{

    for(const int *ptr = tabStart;ptr!=tabEnd;++ptr )
    {
         if (*ptr == number) {
            return ptr;
        }
       
    }
    return tabEnd;

}


int main() {
 int tab1[] = {13, -2, 21, 5, -8, 5, 7, -10};
 int *ptr1 = find(tab1+4, tab1+7, 50);
 const int tab2[] = {13, -2, 21, 5, -8, 5, 7, -10};
 const int *ptr2 = find(tab2 + 4, tab2 + 8, 5);
 std::cout << *ptr1<< " " << ptr2 - tab2 << std::endl;
 return 0;
}
