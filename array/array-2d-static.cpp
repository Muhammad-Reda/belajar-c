#include <iostream>

int main()
{

    int row = 2;
    int col = 4;

    int array[2][4];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == 0)
                array[i][j] = 1;
            array[i][j] = array[i][j - 1] + 1;
        }
    }

    for (int i = 0; i < row; i++)
    {
        std::cout << "[ ";
        for (int j = 0; j < col; j++)
        {
            std::cout << array[i][j];
        }
        std::cout << " ] ";
    }

    return 0;
}