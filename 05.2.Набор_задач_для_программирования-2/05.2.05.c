/*
5.2 Набор задач для программирования - 2.



Результатом операции десятичного сдвига вправо для целого числа 127
будет число 12. Написать программу, которая осуществляет операцию десятичного сдвига вправо для целого трёхзначного числа k

.

Входные данные:
Целое трёхзначное число k

.

Выходные данные:
Число, полученное из числа k

десятичным сдвигом вправо.

Sample Input:

356

Sample Output:

35
*/

#include <stdio.h>
#include <math.h>



int main() {
    int X;


    scanf("%d",&X);
    printf("%d", X/10);
  // put your code here
  return 0;
}
/*better code

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a/10);
}

*/
