#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int count6(string num){
    int count6;
    string dd = "6";
    string v = "6";

    for(int i = 0 ; i<num.length();++i){
        if(num[i]==dd[0]){

            ++count6;
        }
    }
    return count6;
}
int main(int argc, char** argv) {

    ifstream file2;
    file2.open("liczby2.txt");

    int num;
    int cun1=0,cun2=0;
    char buff[33];
    if(file2.good()){
        for(int i = 0 ; i<1000;++i){

            file2 >> num;


            cun1 +=count6(itoa(num,buff,10));
            cun2 +=count6(itoa(num,buff,8));


        }
    }
    cout<<cun1<<','<<cun2;


    return 0;
}
