#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--){
        string hiddenWord, guessWord; cin >> hiddenWord >> guessWord;
        vector<char> hiddenVector(hiddenWord.begin(), hiddenWord.end());
        vector<char> guessVector(guessWord.begin(), guessWord.end());
        vector<char> resultVector; resultVector.reserve(5);
    // // verifying vector... 
    //     for(const char &e: hiddenVector) {
    //         cout << e << " "; 
    //     } cout << endl;
        // cout << endl;
        for (int i = 0; i < 5; i++)
        {
            if(hiddenVector[i] == guessVector[i]) {
                resultVector.push_back('G');
            } else resultVector.push_back('B');
        }
        
        for(const char &e : resultVector) cout << e;
        cout << endl;
    }
    return 0;
}