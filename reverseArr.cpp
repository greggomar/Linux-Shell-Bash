#include <vector>
#include <iostream>

using namespace std;
 
int main(){
    int n = 0, x, i;
    cin >> n;
    vector<int> arr;
    for(int i= 0; i < n; ++i){
        cin >> x;
        arr.push_back(x);
    }
    for(i = arr.size(); i > 0; --i){
        cout << (arr[i-1]) << " " ;
    } 
}
