#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<iomanip>
#include<cctype>

using namespace std;

int main(int argc,char *argv[]){
    int average;
    double sum = 0;
    int count = 0;
    if(argc == 1){
            cout << "Please input numbers to find average.";
    }else{
        for(int i = 1;i < argc;i++){
            sum += atoi(argv[i]);
            count++;
    }
    average = sum/count;
    cout << "---------------------------------\n";
    cout << "Average of "<< count << " numbers = "<< average << "\n";
     cout << "---------------------------------\n";
    }
    return 0;
}