/* -- EX REALIZADO
#include <stdio.h>
#include <stdio.h>
int main (){ 
int x = 10;
int y = 10;
y = x ++;
printf ("x = %d\n" , x) ;
printf ("y = %d\n" , y) ;
return 0;
}
*/
#include <iostream> 	// não estava incluso no codigo do professor, causou erro de compile
using namespace std; 	// não estava incluso no codigo do professor, causou erro de compile

// main function
int main()
{
  // Array  to store 5 numbers
  double T[5]; 
  double sum; // to store sum 
  double avg; // to store result
 
  // take input values
  cout << "Enter five numbers: ";
  for (int loop = 0; loop  < 5; ++loop )
  {
    cin >> T[loop ];
  }
  
  // calculate sum value
  sum = 0;
  for (int loop  = 0; loop  < 5; ++loop )
  {
    sum += T[loop ];
  }
 
  // calculate average value
  avg = sum/5;
  
  // display result
  cout << "Sum = " << sum << endl;
  cout << "Average = " << avg << endl;
 
  return 0;
}