#include<iostream>
#include<vector>
using namespace std;
int main() {
    int size; cin >> size;
    int d; cin >> d;
    vector<int> v; 
    v.reserve(size);
    for (int i=0; i<size; i++) {
        int input; cin >> input;
        v.push_back(input);
    }
    for(int i = 0; i < d; i++){  
        int j, first;  
        first = v[0];  
        for(j = 0; j < size-1; j++) 
            v[j] = v[j+1];  
        v[j] = first;  
    }  
    
    for(const auto& x:v){
        cout << x << " " ;
    }
    return 0;
}
