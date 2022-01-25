#include <bits/stdc++.h>
using namespace std;
void reverseArr(int i, int j, vector<int> &v)
{
    while (i < j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int t;
    int size;
    cin >> t;
    for (int c = 1; c <= t; c ++)
    {
        cin >> size;
        int cost = 0;
        vector<int> v(size);
        for (auto &i : v)
            cin >> i;
        for (int i = 0; i < size; i++)
        {
            int j = i;
            while (v[j] != i + 1)
                j++;
            reverseArr(i, j, v);
            cost += (j - i + 1);
        }
        cout << "Case #" << c << ": " << cost-1 << endl;
    }
}
