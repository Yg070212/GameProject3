#include <iostream>
#include <stack>

using namespace std;

int main()
{
#pragma region Stack

    stack<int> stack;

    stack.push(30);
    stack.push(20);
    stack.push(10);

    cout << "Stack Size : " << stack.size() << endl;

    while (stack.empty() == false)
    {
        cout << stack.top() << endl;

        stack.pop();
    }

#pragma endregion



    return 0;
}