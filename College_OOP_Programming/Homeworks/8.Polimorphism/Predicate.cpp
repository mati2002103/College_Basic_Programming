#include <iostream>
#include <vector>
class Predicate{
    private:
    public:
    virtual bool operator()(int number) const = 0;
};
class Even:public Predicate{
    public:
         bool operator()(int number) const override{
            return number % 2 == 0;
         };

}
;
class Negative:public Predicate{
        bool operator()(int number) const override{
            return number <0; 
        };

};








int count(const std::vector<int> &el, const Predicate &pred)
{
    int count = 0;
    for (int i = 0; i < el.size(); ++i)
    {
        if (pred(el[i]))
        {
            ++count;
        }
    }
    return count;
}
int main()
{
    const std::vector<int> el{-7, 12, -11, 2, 9, -4, -6, 5, 23, -1};
    std::cout << count(el, Even()) << " " << count(el, Negative())
              << std::endl;
    return 0;
}