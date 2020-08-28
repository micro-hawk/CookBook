#include <iostream>
#include <vector>
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE
//         // for getting input from input.txt
//         freopen("input.txt", "r", stdin);
//         // for writing output to output.txt
//         freopen("output.txt", "w", stdout);
// #endif

        int n;
        std::vector<int> v;
        cin >> n;
        v.reserve(n);
        for (int i = 0; i < n; ++i)
        {
                int input;
                cin >> input;
                v.push_back(input);
        }
        std::vector<int> temp_vector;
        temp_vector = v;
        int lowest_scores = temp_vector[0], highest_scores = temp_vector[0];
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; ++i)
        {
                if (lowest_scores < temp_vector[i])
                {
                        lowest_scores = temp_vector[i];
                        count1++;
                }
        }
        for (int i = 0; i < n; ++i)
        {
                if (highest_scores > temp_vector[i])
                {
                        highest_scores = temp_vector[i];
                        count2++;
                }
        }
        cout << count1 << " " << count2; //lowest score
        // cout << count2;		//highest score
        return 0;
}