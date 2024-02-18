#include "stack.h"
#include <iostream>

using namespace std;

int main() {
  ItemType character;
  Stack stack;
  ItemType stackItem;
  
  cout << "Adicione uma String" << endl;     
  cin.get(character);
  while (character != '\n')
    {
      stack.push(character);
      cin.get(character);
    }
  cout << "Sua string invertida fica:" << endl;
  while (!stack.isEmpty())
    {
      stackItem = stack.pop();
      cout << stackItem;
    }
  
  cout << endl;
}
