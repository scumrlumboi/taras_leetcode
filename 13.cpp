#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;


int romanToInt(string s) {

        char tab2[1024];
        strcpy(tab2, s.c_str());

        int counter = 0;
        int numb = 0;
        for (int i = 0; tab2[i] != 0; i++) {
            if (tab2[i] == 'M')
                numb = numb + 1000;
            else if (tab2[i] == 'D') {
                numb = numb + 500;
                if (tab2[i + 1] == 'C') {
                    for (int j = 0; j < 3 && tab2[i] == 'C'; j++) {
                        numb = numb + 100;
                        i++;
                    }
                }
            }
            else if (tab2[i] == 'C') {
                numb = numb + 100;
                if (tab2[i + 1] == 'M') {
                    numb = numb + 800;
                    i++;
                }
                else if (tab2[i + 1] == 'D') {
                    numb = numb + 300;
                    i++;
                }
            }
            else if (tab2[i] == 'L') {
                numb = numb + 50;
                if (tab2[i + 1] == 'X') {
                    for (int j = 0; j < 3 && tab2[i] == 'X'; j++) {
                        numb = numb + 10;
                        i++;
                    }
                }
            }
            else if (tab2[i] == 'X') {
                numb = numb + 10;
                if (tab2[i + 1] == 'C') {
                    numb = numb + 80;
                    i++;
                }
                else if (tab2[i + 1] == 'L') {
                    numb = numb + 30;
                    i++;
                }
            }
            else if (tab2[i] == 'V') {
                numb = numb + 5;
                if (tab2[i + 1] == 'I') {
                    for (int j = 0; j < 3 && tab2[i] == 'X'; j++) {
                        numb = numb + 1;
                        i++;
                    }
                }
            }
            else if (tab2[i] == 'I') {
                numb = numb + 1;
                if (tab2[i + 1] == 'X') {
                    numb = numb + 8;
                    i++;
                }
                else if (tab2[i + 1] == 'V') {
                    numb = numb + 3;
                    i++;
                }
            }
            else
                return 0;
        }


        return numb;

    }


int main() {

    string s = "MCCIXVII";
    cout << romanToInt(s);

    return 0;

}
