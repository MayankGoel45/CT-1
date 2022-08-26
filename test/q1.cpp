// Name : Mayank Goel
// Roll no : 2010990457
// Set no :
// ques 1

#include <bits/stdc++.h>
using namespace std;

// input func.
int input()
{
    int n{};
    cin >> n;
    return n;
}

// main code
int subArr(int arr[], int n)
{
    cout << "enter target : ";
    int target{input()};
    for (int i{}; i < n; i++)
    {
        for (int j{}; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "[" << arr[i] << "," << arr[j] << "]\n";
            }
        }
    }
}

// array input
void inArr()
{
    cout << "enter arr size : ";
    int n{input()};
    int arr[n];
    cout << "enter arr elements : ";
    for (int i{}; i < n; i++)
    {
        cin >> arr[i];
    }
    subArr(arr, n);
}

int main()
{
    inArr();
    return 0;
}