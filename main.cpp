#include <iostream>
#include "example_date.h"

using namespace std;

int main()
{
    Date d1;

    d1.setMonth(0);

   // printf("%d \n", d1.getMonth());

    cout << d1.getMonth() << endl;

    cout << "Hello world!" << endl;
    return 0;
}
