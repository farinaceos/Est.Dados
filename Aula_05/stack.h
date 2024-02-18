#include "item_type.h"

const int MAX_ITEMS = 1500; // alterei o numero de itens na pilha para verificar o comportamento do programa

class Stack {
 public:
  Stack();   // Construtor
  ~Stack();   // Destrutor
  bool isEmpty() const;
  bool isFull() const;
  void print() const;
  
  void push(ItemType);
  ItemType pop();
 private:
  int length;
  ItemType* structure;
};

