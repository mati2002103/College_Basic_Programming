#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

struct Question {
  int a;
  int b;
};

void print(const Question &q) {
  std::cout << std::setw(2) << q.a << " " << std::setw(2) << q.b << " ";
}

int mul(const Question &q) {
  return q.a * q.b;
}

bool eq(const Question &q1, const Question &q2) {
  return q1.a == q2.a && q1.b == q2.b ||
    q1.a == q2.b && q1.b == q2.a;
}

bool less(const Question &q1, const Question &q2) {
  return mul(q1) < mul(q2);
}

Question draw() {
  return Question {1 + std::rand() % 10, 1 + std::rand() % 10};
}

void create_db(Question tab[], int size) {
    for (int i = 0; i < size; ++i) {
      tab[i] = draw();

      for (int j = 0; j < i; ++j) {
        while (eq(tab[i], tab[j])) {
          tab[i] = draw();
        }
      }
  }
}

void bubble_sort(Question tab[], int size) {
  bool unordered;

  do {
    unordered = false;

    for (int i = 0; i + 1 < size; ++i) {
      if (less(tab[i + 1], tab[i])) {

        Question tmp = tab[i];
        tab[i] = tab[i + 1];
        tab[i + 1] = tmp;

        unordered = true;
      }
    }
  } while (unordered);

}

void test(const Question tab[], int size) {
  for (int i = 0; i < size; ++i) {
    int ans;
    do {
      print(tab[i]);
      std::cin >> ans;
    } while (ans != mul(tab[i]));
  }
}

int main() {
  static int size = 10;

  std::srand(std::time(nullptr));

  Question tab[size];
  create_db(tab, size);
  bubble_sort(tab, size);

  test(tab, size);

  return 0;
}
