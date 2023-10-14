//PO/nrGrupy/nrLaboratorium
//Mateusz.Gajewski@wit.edu.pl lub
//gajewsm1@wit.edu.pl
#include <iostream>
void swap(int *p1,int *p2)
{
   
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    
}


void bubble_sort(int *tab,int size)
{
    bool unordered = true;
    
    while (unordered)
    {
        unordered = false;
        for (int *ptr = tab; ptr+1<tab+size;++ptr)
        {
            if (*ptr > ptr[1])
            {
                swap(ptr,ptr+1);
                
                unordered = true;
            }
        }
    }

}

int main()
{
   int tab[] = {13, -2, 21, 5, -8, 5, 7, -10};
    bubble_sort(tab, 8);
    for (int *ptr = tab; ptr < tab + 8;){
    std::cout << *ptr++ << " ";
    }
    std::cout << std::endl;

}