#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <utility>
using namespace std;


/*
NOTES

one lit required in every column, otherwise unsolvalbe
two lit next to each other in a row is better



HOW
check if solvable
moves =  n
subtract adjacent lights in a row from moves




*/


int main(){
    ifstream input("input.txt");
    string line;
    

    getline(input, line);
    int n = stoi(line.substr(0, line.find(" ")));
    int m = stoi(line.substr(line.find(" ") + 1, line.length()));
    vector<vector<int>> lit;
    
    
    for (int i = 0; i < n; i++){
        vector<int> col;
        lit.push_back(col);
    }

    while(getline(input, line)){
        int x = stoi(line.substr(0, line.find(" ")))-1;
        int y = stoi(line.substr(line.find(" ") + 1, line.length()))-1;
        lit[x].push_back(y);
    }
    
    int moves = n-1;
    for(int i = 0; i < n-1; i++){
        if(lit[i].empty()){
            cout << "-1";
            return 0;
        }
        for(int j = 0; j < lit[i+1].size()-1; j++){
            if(lit[i+1][j] = )
        }

    }

    

}