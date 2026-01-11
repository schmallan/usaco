#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
using namespace std;


int cubeSize;
int xArr[1000][1000];
    int yArr[1000][1000];
    int zArr[1000][1000];

#pragma region problem

#pragma endregion



string tc;
ifstream ans("testdata/"+tc+".out");

int correct = 0;
void checkans(int b, int comp){
    int answer;
    ans >> answer;
        if (comp!=answer){
            cout << "FAIL for N:"<<b<<": got " << comp << ", expected " << answer << endl;
        }
        if (comp==answer){correct++;}
}

int main() {

  //  cin >> tc;
    //ifstream cin("testdata/"+tc+".in");

    cin >> cubeSize;

    int numlines;
    int count = 0;
    cin >> numlines;
    for (int line = 0; line < numlines; line++){
        int x, y, z;
        cin >> x >> y >> z;
        xArr[y][z]++;
        if (xArr[y][z]==cubeSize) count ++;
        yArr[x][z]++;
        if (yArr[x][z]==cubeSize) count ++;
        zArr[x][y]++;
        if (zArr[x][y]==cubeSize) count ++;
        //if (line%1000==0)cout << line << "\n";
        //checkans(line,count());
        cout<<count<<endl;
    }


   // cout<<correct<<"/"<<numlines<<" correct"<<endl;
   // std::cin >> tc;
    return 0;
}




