#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename, newData;

    cout << "Enter the filename: ";
    cin >> filename;

    cout << "Enter the new data: ";
    getline(cin, newData);

    ofstream outputFile(filename, ios::app);

    if (!outputFile.is_open()) {
        cerr << "Error opening file for appending." << endl;
        return 1;
    }

    outputFile << newData << endl;
    outputFile.close();

    cout << "Data appended successfully." << endl;
    return 0;
}