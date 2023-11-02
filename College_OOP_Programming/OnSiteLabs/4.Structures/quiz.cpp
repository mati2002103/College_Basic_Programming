#include <iostream>
#include <cstdlib>
#include <ctime>
/*
struct Node{
    Node *left;
    Node * Right;
    Będą drzewa
}

*/
struct Quiz{
    int a;
    int b;
    int answer;
};


void generate_question(Quiz &q)
{
                
        q.a = rand() % 10 + 1;
        q.b = rand() % 10 + 1;
        q.answer = q.a * q.b;
    
}
void swap(Quiz *p1,Quiz *p2)
{
   
        Quiz temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    
}
Quiz quiz_sort(Quiz *quiz){
  
    bool unordered = true;
    
    for(int j =0;j<10;++j){
        for (int i = 0; i < 10; ++i) {
            if (quiz[i].answer > quiz[i + 1].answer) {
                swap(&quiz[i], &quiz[i + 1]);
        }
    }
    }
    return *quiz;

}


void przeprowadzQuiz(Quiz *q){
    std::cout << "Start Quizu"<<std::endl;
    int answer;
    for(int i =0;i<=10;++i){
   
    std::cout<< q[i].a << " "<<q[i].b << " ";

    while(answer !=q[i].answer)
        std::cin>>answer;
    }
}


int main(){

    std::srand(time(NULL));


    Quiz quiz[10];
    
    for(int i =0;i<10;++i){  
        Quiz Temp;
        generate_question(Temp);    
      for(int j= 0;j<i;++j){
        while(Temp.answer ==quiz[j].answer && (Temp.a == quiz[j].b || Temp.a == quiz[j].a)){
         generate_question(Temp);    
        }

      } 
      quiz[i] = Temp;
    }
  
    quiz_sort(quiz);
    
    for(int i =0;i<10;++i){
        std::cout << quiz[i].a << " ";
        std::cout << quiz[i].b << " ";
        std::cout << quiz[i].answer << " ";
        std::cout << std::endl;
    }
    
    przeprowadzQuiz(quiz);

}

   



       



