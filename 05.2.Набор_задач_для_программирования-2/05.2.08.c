/*
5.2 Набор задач для программирования - 2.


Результатом операция циклический сдвиг влево для целого числа 127
будет число 271. Написать программу, которая осуществляет операцию циклический сдвиг влево для целого трёхзначного числа k

.

Входные данные:
Целое трёхзначное число k

.

Выходные данные:
Число, полученное из числа k

циклическим сдвигом влево.

Sample Input 1:

127

Sample Output 1:

271

Sample Input 2:

100

Sample Output 2:

1
*/

#include <stdio.h>
//#include <math.h>



int main() {
    int X, x1, x2;


    scanf("%d",&X);
    x1 = X/100;
    x2 = X%100;
    X = (x2*10)+x1;

    printf("%d\n", X);
  // put your code hx1
  return 0;
}

/*better code

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a/10%10*100+a%10*10+a/100);
}

*/
