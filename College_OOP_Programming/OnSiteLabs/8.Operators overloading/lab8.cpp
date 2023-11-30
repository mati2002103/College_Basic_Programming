#include <iostream>
#include <ctime>

class Question{
  private:
    int a;
    int b;
    int wynik;

    friend void print(const Question &q);
    
  public:
  Question();
  Question(int aa, int bb);

  static Question draw();
  int solution() const;
  friend bool equal(const Question &q1,const Question &q2);
  friend bool operator!=(const Question &q1,const Question &q2);
    friend bool operator==(const Question &q1,const Question &q2);

  friend bool operator<(const Question &q1,const Question &q2);
    friend std::ostream& operator<<(std::ostream& os, const Question &Q);
  
  
  

  protected:

};

Question::Question() : a(-1),b(-1){}
Question::Question(int aa, int bb) : a(aa), b(bb){};

Question Question::draw()
{
  return Question(rand() % 10 + 1,rand() % 10 + 1);
}
/*
void print(const Question &q){
  std::cout<< q.a << " "<< q.b << std::endl;  
}
*/
/*
bool equal(const Question &q1,const Question &q2){
   return q1.a == q2.a && q1.b == q2.b ||
    q1.a == q2.b && q1.b == q2.a;
}
*/
int Question::solution() const{
  return this->a*b;
}
bool operator!=(const Question &q1,const Question &q2)
{
    return !(q1.a == q2.a && q1.b == q2.b ||
    q1.a == q2.b && q1.b == q2.a);
}
bool operator<(const Question &q1,const Question &q2)
{
    return q1.solution() < q2.solution();
}
bool operator==(const Question &q1,const Question &q2)
{
   return (q1.a == q2.a && q1.b == q2.b ||
    q1.a == q2.b && q1.b == q2.a);}

std::ostream& operator<<(std::ostream& os, const Question &Q)
{
    os << Q.a << " " << Q.b;

}





int main() {
  std::srand(std::time(nullptr));

  Question table[10];

  for (int index1, index2 = 0; index2 < 10; ++index2) {
    do {
      table[index2] = Question::draw();
      for (index1 = 0; table[index1] != table[index2]; ++index1);
    } while (index1 < index2); }

    for (int index = 0; index < 10; ++index) {
      int answer;

      do {
        std::cout <<table[index];
        std::cin >> answer; }
      while (answer != table[index].solution());
    }
}

