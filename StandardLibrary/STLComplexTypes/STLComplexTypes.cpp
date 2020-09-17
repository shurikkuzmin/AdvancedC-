#include <iostream>
#include <string>
#include <vector>
#include <map>

int main()
{
    std::map<std::string, std::vector<int>> scores;

    scores["Mike"].push_back(10);
    scores["Mike"].push_back(20);
    scores["Vicky"].push_back(15);


    for (std::map<std::string, std::vector<int>>::iterator it = scores.begin(); it != scores.end(); it++)
    {
        std::string name = it->first;
        std::vector<int> & scoreList = it->second;
        
        std::cout << name << ": " << std::flush;
        for (int i = 0; i < scoreList.size(); i++)
        {
            std::cout << scoreList[i] << " " << std::flush;
        }
        std::cout << std::endl;
    }

    return 0;
}