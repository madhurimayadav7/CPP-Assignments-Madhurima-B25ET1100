#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string sourceFile, destinationFile;

    cout << "Enter source file name: ";
    cin >> sourceFile;

    cout << "Enter destination file name: ";
    cin >> destinationFile;

    // Open source file for reading
    ifstream source(sourceFile);

    if (!source)
    {
        cout << "Unable to open source file." << endl;
        return 1;
    }

    // Open destination file for writing
    ofstream destination(destinationFile);

    if (!destination)
    {
        cout << "Unable to open destination file." << endl;
        return 1;
    }

    // Copy contents of source file to destination file
    destination << source.rdbuf();

    // Close both files
    source.close();
    destination.close();

    cout << "File copied successfully." << endl;

    return 0;
}
