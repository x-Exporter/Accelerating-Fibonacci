#include <iostream>
#include <vector>

using namespace std;

int fib_helper(int n, std::vector<int>& memo) 
{
    if (memo[n] != -1) 
    {
        return memo[n];
    }
    if (n <= 1) 
    {
        memo[n] = n;
    }
    else 
    {
        memo[n] = fib_helper(n - 1, memo) + fib_helper(n - 2, memo);
    }
    return memo[n];
}

int fib(int n) 
{
    std::vector<int> memo(n + 1, -1);
    return fib_helper(n, memo);
}

int main() {
    setlocale(LC_ALL, "ru");
    int num;
    cout << "Введите n: ";
    cin >> num;
    cout << fib(num);
}
