#include <iostream>
#include <fstream>  // For file handling
using namespace std;

int main() {
    cout<<"Practical no. 8"<<endl;
    // Create and write to the file
    ofstream outputFile("sample.txt");

    // Check if the file is open
    if (!outputFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    // Write a line of text to the file
    outputFile << "Hello, this is a test file!" << endl;

    // Close the file after writing
    outputFile.close();

    // Read from the file
    ifstream inputFile("sample.txt");

    // Check if the file is open
    if (!inputFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    string content;
    // Read and display the content from the file
    while (getline(inputFile, content)) {
        cout << content << endl;
    }

    // Close the file after reading
    inputFile.close();

    return 0;
}
