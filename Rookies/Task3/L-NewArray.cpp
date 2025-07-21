#include <iostream>
using namespace std;

void createNewArray(int A[], int B[], int N) {
    for (int i = 0; i < N; i++) cout << B[i] << " ";
    for (int i = 0; i < N; i++) cout << A[i] << (i == N - 1 ? '\n' : ' ');
}

int main() {
    int N;
    cin >> N;
    int A[1000], B[1000];
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];
    createNewArray(A, B, N);
    return 0;
}
