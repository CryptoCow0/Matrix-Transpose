#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    vector<vector<string>> matrix;
    cout << "Give your Matrix with each item in the row separated by spaces, and each row separated by a newline (TYPE q WHEN DONE)" << endl;
    string line;

    // Parse the input and build the matrix
    while (getline(cin, line)) {
        if (line == "q" || line == "quit"|| line == "Quit") break;
        vector<string> row;
        stringstream ss(line);
        string item;
        while (ss >> item) {
            row.push_back(item);
        }
        matrix.push_back(row);
    }

    // Transpose the matrix
    vector<vector<string>> transposed(matrix[0].size(), vector<string>(matrix.size()));
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    cout << "Transposed Matrix:" << endl;
    for (size_t i = 0; i < transposed.size(); ++i) {
        for (size_t j = 0; j < transposed[i].size(); ++j) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
