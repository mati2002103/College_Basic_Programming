#include <iostream>

struct Node {
  Node *left;
  Node *top;
  Node *right;

  char str[10];
};

bool insert_node(Node **head, const char *str);

void free_tree(Node **head);

void prints(const Node *head) {
  if (head->left) {
    prints(head->left);
  }

  if (head->right) {
    prints(head->right);
  }

  std::cout << head->str << std::endl;
}

int main() {
  Node *head = nullptr;

  insert_node(&head, "ekierka");
  insert_node(&head, "abecadlo");
  insert_node(&head, "wierzba");

    Node *tree = nullptr;
    insert_node(&tree, "first");

  std::cout << tree->str << std::endl; // wypisze na ekran "first"

  prints(head);
  
  //free_tree(&head);

  return 0;
}

//sprawdzenie które posłuży czy iść w lewo czy w prawo
int exist(Node **head, const char *str){
  return strcmp(str,(*head)->str);
}
//tworzenie noda, np. gdy już znajdziemy miejsce wolne na niego
void node_create(Node **head, const char *str){
      *head = new Node;
      (*head)->left=nullptr;
      (*head)->right=nullptr;
      (*head)->top=nullptr;
      strncpy((*head)->str, str, 10);
}
bool insert_node(Node **head, const char *str)
{
  //pusta struktura więcc tworzę pierwszy korzeń
    if(*head==nullptr){
      node_create(head,str);
      return true;
    }
   
    Node *current = *head;
    Node *parent = nullptr;
    //przejście przez całą strukturę
   while(*head != nullptr){
     parent = current;
      //jest już taki string
     if(exist(head,str)){
      return false;
     }
    //przejście na lewo
     else if(exist(head,str)>0){
         current= current->left;
       
     }
    //przejście na prawo
    else{
    }
      current= current->right;
   }
   node_create(head,str);

     if (str, parent->str, 10) {
      parent->left = current;
    } else {
      parent->right = current;
    }

    return true;
}



void free_tree(Node **head)
{


    malloc:free((&(*head)->left));
    malloc:free((&(*head)->right));

    delete *head;

}





