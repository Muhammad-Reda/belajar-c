#include <iostream>
#include <string>

int main()
{
    int x = 3;
    int increase = 0, decrease = 0;
    int same = 0, greater = 0;
    std::string digitsString;

    for (int i = 0; i < x; i++)
    {
        digitsString.push_back('9');
    }

    int digitsInt = std::stoi(digitsString);

    for (int j = 101; j <= 200; j++)
    {
        std::string dig = std::to_string(j);
        std::string prevState = "p";
        std::string currState = "c";
        int sameNumber = 0;
        int sameState = 0;
        if (dig.size() < 3)
        {
            increase += 1;
            continue;
        }
        for (int k = 0; k < dig.size(); k++)
        {
            // std::cout << "K: " << k << std::endl;
            int prev;

            if (k == 0)
            {
                prev = std::stoi(std::string(1, dig.at(k)));
                // std::cout << "Prev: " << prev << std::endl;
                continue;
            }
            // 332 123 121 111

            int curr = std::stoi(std::string(1, dig.at(k)));
            // std::cout << "prev: " << prev << std::endl;
            // std::cout << "cur: " << curr << std::endl;
            // std::cout << "Prevstate: " << prevState << std::endl;
            // std::cout << "CurrState: " << currState << std::endl;
            // std::cout << "samestate: " << sameState << std::endl;

            if (curr > prev)
            {
                currState = "increase";
                // std::cout << "Increase > " << "Current state: " << currState << " prevState: " << prevState << " sameState: " << sameState << std::endl;
                prev = curr;
                if (prevState == "p")
                {
                    prevState = currState;
                    currState = "c";
                    if (currState.compare(prevState) == 0)
                    {
                        sameState = 1;
                    }
                    // std::cout << "init > " << "Current state: " << currState << " prevState: " << prevState << " sameState: " << sameState << std::endl;
                }

                else if (k == dig.size() - 1 && sameState)
                {
                    // std::cout << "true" << std::endl
                    //   << std::endl;
                    greater += 1;
                    increase += 1;
                }
                else if (currState.compare(prevState) == 0)
                {
                    sameState = 1;
                }
                else
                {
                    break;
                }
            }
            else

                if (curr == prev)
            {
                // std::cout << "Increase == " << std::endl;

                currState = "increase";
                sameNumber = 1;
                if (prevState == "p")
                {
                    // std::cout << "Init state" << std::endl;
                    prevState = currState;
                    currState = "c";
                }

                else if (k == dig.size() - 1 && (sameState || sameNumber))
                {
                    // std::cout << "true" << std::endl
                    //   << std::endl;
                    same += 1;
                    increase += 1;
                }
                else if (currState.compare(prevState))
                {
                    sameState = 1;
                }
                else
                {
                    // std::cout << "Break == " << std::endl;
                    break;
                }
            }
            else

                if (curr < prev)
            {
                // std::cout << "descrease < " << std::endl;

                currState = "decrease";
                prev = curr;
                if (prevState == "p")
                {
                    // std::cout << "Init state" << std::endl;
                    prevState = currState;
                    currState = "c";
                }

                else if ((k == dig.size() - 1) && (sameState || sameNumber))
                {
                    // std::cout << prevState << " " << k << " " << dig.size() - 1 << " samestate: " << sameState << "\n";
                    decrease += 1;
                    // std::cout << "true" << std::endl
                    //           << std::endl;
                }
                else if (currState.compare(prevState) == 0)
                {
                    sameState = 1;
                }
                else
                {
                    // std::cout << "Break < " << std::endl;
                    break;
                }
            }
        }
    }

    std::cout << "Increase: " << increase << " Decrease: " << decrease << " Same: " << same << " greater: " << greater << std::endl;
    std::cout << increase + decrease;

    return 0;
}