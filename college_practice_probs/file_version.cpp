#include <iostream>
#include <string>
#include <regex>

using namespace std;

int extver(string &files) {
    regex pattern(R"(^File_(\d+)$)"); // Regex for "File_X" format
    smatch match;
    
    if (regex_match(files, match, pattern)) {
        return stoi(match[1]); // Extract and return version number
    }
    
    return -1; // Return -1 for incorrect format
}

int latver(string files[], int nf) {
    int latestver = -1; // Start with -1 to handle no valid files

    for (int i = 0; i < nf; i++) {
        int version = extver(files[i]);
        if (version > latestver) {
            latestver = version;
        }
    }

    return latestver;
}

int main() {
    string files[] = {"File_12", "file_4", "File_2", "File_20", "File_A"}; // Mixed cases
    int nf = sizeof(files) / sizeof(files[0]);
    
    int latest_version = latver(files, nf);
    cout << latest_version << endl;

    return 0;
}
