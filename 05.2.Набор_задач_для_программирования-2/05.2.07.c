/*5.2 Набор задач для программирования - 2.


Результатом операция циклический сдвиг вправо на десятичный разряд для целого числа 127
будет число 712. Написать программу, которая осуществляет операцию циклический сдвиг вправо для целого трёхзначного числа k

.

Входные данные:
Целое трёхзначное число k

.

Выходные данные:
Число, полученное из числа k

циклическим сдвигом вправо.

Sample Input 1:

127

Sample Output 1:

712

Sample Input 2:

100

Sample Output 2:

10

*/

#include <stdio.h>
//#include <math.h>



int main() {
    int X, x1, x2;


    scanf("%d",&X);
    x1 = X/10;
    x2 = X%10;
    X = (x2*100)+x1;

    printf("%d\n", X);
  // put your code here
  return 0;
}

/*better code

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a%10*100+a/100*10+a/10%10);
}

*/
