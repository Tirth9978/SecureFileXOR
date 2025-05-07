#include<iostream>
#include<fstream>
#include<string>
#include <dirent.h>
#include <sys/stat.h>
#include <windows.h>
using namespace std ;

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define END "\033[0m"

char KEY ;
string type ;

void processFile(const string filepath,const string outPutPath){
    ifstream file1(filepath,ios::binary);
    ofstream file2(outPutPath,ios::binary);
    if (!file1){
        cout << RED "Input Files not Exist :(\n" END;
        return ;
    }
    char ch;
    while(file1.get(ch)){
        ch = ch ^ KEY;
        file2.put(ch);
    }

    file1.close();
    file2.close();
}

void animation(){
    system("cls");
    cout << endl << endl<< endl;
    cout << GRN "                          Loading" END;
    for (int i=0;i<5;i++){
        cout <<GRN "." END;
        Sleep(400);
    }
    cout << endl << endl << endl;
    return ;
}

int main(){
    int choice ;
    cout <<YEL "Universal File Encryptor/Decryptor\n";
    cout << "1. Encrypt files\n";
    cout << "2. Decrypt files\n";
    cout << "Enter your choice: " END ;
    cin >> choice;

    cout << YEL "Key : ";
    cin >> KEY;
    cout << "Type : " END;
    cin >> type;
    animation();
    struct stat st = {0};
    if (stat("output", &st) == -1) {
        mkdir("output");
    }
    DIR* dir;
    struct dirent* entry;

    dir = opendir("files");
    if (!dir) {
        std::cerr <<RED  "Failed to open 'files' folder.\n" END;
        return 1;
    }

    while((entry = readdir(dir))!= nullptr){
        string filename = entry->d_name;
        if (filename == "." || filename == "..") continue;

        string includePath = "files/" + filename;
        string outputPath;
        string ref = "."+type;
        if (choice == 1){
            outputPath = "output/" + filename + "." + type;
        }
        else if (choice == 2 && filename.find(ref) != filename.npos ){
            
            // filename = filename.erase(filename.find(ref),filename.length()-1);
            filename = filename.substr(0,filename.length()-ref.length());
            outputPath = "output/" + filename;
        }
        else {
            continue;
        }

        processFile(includePath,outputPath);
    }
    cout << GRN "file processing successfully done\n";
    cout << "Thank You :)\n" END;
    Sleep(2000);
    return 0;
}