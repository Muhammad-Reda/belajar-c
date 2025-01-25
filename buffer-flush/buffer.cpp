// How is buffer and flused work?

#include <iostream>

using namespace std;

int main()
{
    int counter = 0;

    while (true)
    {
        cout << "counter: " << counter; // buffer the output to the console until the buffer is full or the program ends
        // cout << "flushed";
        // cout << endl;

        // break the looping
        if (counter >= 5)
        {
            // flush the buffer
            cout << "flushed";
            cout << endl; // flush the buffer to the console
            break;
        }

        counter++;
    }

    return 0;
}

/*
    Buffer is a temporary storage area that stores data while it is being transferred from one place to another. Meanhwile flush is a process of moving data from a buffer to a destination. In this case, the buffer is the output stream to the console and the destination is the console itself.
*/