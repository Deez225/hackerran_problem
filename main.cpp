#include <iostream>
#include <cmath>
#include <algorithm>

int drawingBook(int n, int p)
{
    return std::min(floor(p / 2), (floor(n / 2) - floor(p / 2)));
}


/*

FROM HACKER_RANK

Sample Input 0
6
2
Sample Output 0

1

Sample Input 1

5
4
Sample Output 1

0
 */
int main()
{
    std::cout << drawingBook(6, 2) << std::endl;
    std::cout << drawingBook(5, 4) << std::endl;
}