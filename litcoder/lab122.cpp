#include <iostream>
#include <vector>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
struct Queue
{
    stack<int> s1, s2;

    void enQueue(int x)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int deQueue()
    {
        if (s1.empty())
        {
            return -1;
        }

        int x = s1.top();
        s1.pop();
        return x;
    }
    void displayQueue()
    {
        stack<int> temp = s1;

        while (!temp.empty())
        {
            cout << temp.top() << " ";
            temp.pop();
        }

        cout << endl;
    }
};
std::vector<int> extractNumbers(const std::string &inputString)
{
    std::vector<int> numbers;
    std::stringstream ss(inputString);
    std::string token;

    while (getline(ss, token, ' '))
    {
        std::stringstream tokenStream(token);
        while (getline(tokenStream, token, '.'))
        {
            if (!token.empty())
            {
                int num = std::stoi(token);
                numbers.push_back(num);
            }
        }
    }

    return numbers;
}
int main()
{
    Queue q;
    string input;
    int num;
    getline(std::cin, input);
    std::vector<int> extractedNumbers = extractNumbers(input);

    for (int i = 0; i < extractedNumbers.size(); i++)
    {
        // cout << extractedNumbers[i];
        if (extractedNumbers[i] == 1)
        {
            i++;
            q.enQueue(extractedNumbers[i]);
        }
        else if (extractedNumbers[i] == 2)
        {
            q.deQueue();
        }
        else if (extractedNumbers[i] == 3)
        {
            q.displayQueue();
        }
    }
    return 0;
}