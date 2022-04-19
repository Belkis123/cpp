#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string nombres [5] [2];

    nombres [0][0] = "Juan";
    nombres [0][1] = "Perez";

    nombres [1][0] = "Maria";
    nombres [1][1] = "Martinez";

    nombres [2][0] = "Pedro";
    nombres [2][1] = "Jimenez";
    
    nombres [3][0] = "Rosa";
    nombres [3][1] = "Garcia";
    
    nombres [4][0] = "Pablo";
    nombres [4][1] = "Mejia";

 
   for (int i = 0; i < 5; i++)
   {
       for (int j = 0; j < 2; j++)
       {
          cout << nombres [i][j] <<" ";
       }
       cout << endl;
       
   }
   
    return 0;
}
