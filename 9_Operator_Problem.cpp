#include <iostream>
using namespace std;

int main(void)
{
    int x = 5;
    bool result = (x == 4) && (x++); //Here 1st expression is going to be false that's why short circuit happens... 2nd Expression is not evaluated
    cout << result << " " << x;      // 0 and 5
    return 0;
}