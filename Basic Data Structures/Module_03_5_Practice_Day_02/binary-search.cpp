#include <bits/stdc++.h>

using namespace std;

int binary_search(vector<int> &ar, int s, bool isLeft)
{
    int l = 0;
    int r = ar.size() - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid_idx = (l + r) / 2;

        if (ar[mid_idx] == s)
        {
            ans = mid_idx;
            if (isLeft)
                r = mid_idx - 1;
            else
                l = mid_idx + 1;
        }
        else if (ar[mid_idx] < s)
        {
            l = mid_idx + 1;
        }
        else
        {
            r = mid_idx - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int &x : ar)
        cin >> x;

    int s;
    cin >> s;
    sort(ar.begin(), ar.end());
    for (int x : ar)
        cout << x << " ";
    cout << endl;
    // left most search value with binary search
    int left_most = binary_search(ar, s, true);
    int right_most = binary_search(ar, s, false);
    cout << left_most << " " << right_most << endl;
    // is value exist more then one
    if (left_most != right_most)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // how many time search value exist
    cout << s << " have: " << (right_most - left_most) + 1 << " time" << endl;

    // Mid value of search
    cout << "Mid Value Index Is : " << (left_most + right_most) / 2 << endl;

    return 0;
}