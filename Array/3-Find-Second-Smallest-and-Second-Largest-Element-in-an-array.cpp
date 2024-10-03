#include <bits/stdc++.h>
using namespace std;
void findssmallest(int arr[], int n)
{
    int mini = INT_MAX;
    int smin = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            smin = mini;
            mini = arr[i];
        }
        else if (arr[i] != mini && arr[i] < smin)
        {
            smin = arr[i];
        }
    }
      cout << "Second Smallest is" << smin;
}

    void findslargest(int arr[], int n)
    {
        int maxi = INT_MIN;
        int smaxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxi)
            {
                smaxi = maxi;
                maxi = arr[i];
            }
            else if (arr[i] > smaxi && arr[i] != maxi)
            {
                smaxi = arr[i];
            }
        }
        cout << "Second Lsrgest is " << smaxi;
    }
    int main()
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        findslargest(arr, n);
        findssmallest(arr, n);

        return 0;
    }