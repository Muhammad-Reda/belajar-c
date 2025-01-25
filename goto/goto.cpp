#include <iostream>

using namespace std;

int main()
{

    for (int i = 0; i < 10; i++)
    {
    myLabel:
        cout << "Getting the goto checkpint" << endl;
        break;

        if (i == 5)
        {
            goto myLabel;
            i++;
        }
    }
}