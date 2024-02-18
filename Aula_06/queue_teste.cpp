#include "queue.h"
#include <iostream>

using namespace std;

int main() {
  char character;
  Queue queue;
  char queueChar;
  cout << "Adicione uma String." << endl;
  cin.get(character);
  while (character != '\n' and !queue.isFull())
    {
      queue.enqueue(character);
      cin.get(character);
    }

/* Implementacao teste por MATHEUS */

    int i = 1; // contador de posicao
  while (!queue.isEmpty())
    {
      cout << "O item na posicao " << i << " eh " ; // Fala qual a posicao do caracter
      queueChar = queue.dequeue();
      cout << queueChar << "\n";
      i++; // Incrementa o contador
    }
  cout << endl;
}
