#include <iostream>
#include <vector>
using namespace std;

void displayMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

void rotate90Anticlockwise(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int j = 0; j < n; ++j) {
        for (int i = 0, k = n - 1; i < k; ++i, --k) {
            swap(matrix[i][j], matrix[k][j]);
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Original Matrix:\n";
    displayMatrix(matrix);
    rotate90Anticlockwise(matrix);
    cout << "\nMatrix after 90-degree Anticlockwise Rotation:\n";
    displayMatrix(matrix);
    return 0;
}
