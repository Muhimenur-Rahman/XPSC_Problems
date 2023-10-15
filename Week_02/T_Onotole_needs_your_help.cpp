#include<bits/stdc++.h>
using namespace std;
int main() {
    using namespace std;
    int N;
    cin>>N;  
    map<long long int, int> count;
    long long int arr[N];
    for (int i = 0; i < N; i++) {
        cin>>arr[i];
        count[arr[i]]++;
    }
    for (int i = 0; i < N; i++) {
        if (count[arr[i]] == 1) {
            cout<<arr[i]<<endl;
            break;
        }
    }
    return 0;
}
