#include <iostream>
#include <sstream>
#include <utility>
using namespace std;

bool str(float *st,int n)
{
    bool h=true;
    string t;
    getline(cin,t);
    istringstream stream(t);
    for(unsigned int i = 0; i<n; i++)
    {
        if(!(stream>>st[i]))
        {
            h = false;
            return false;
        }
    }
    return true;
}

void sort (float* st, int n) {
    bool sort1 = false;
    while (!sort1) {
        sort1=true;
        for (unsigned int i = 0; i < n - 1; i++) {
            if (st[i] > st[i + 1]) {
                swap(st[i], st[i + 1]);
                sort1 = false;
            }
        }
    }
}

    void print_st(float *st, unsigned int n) {
        for (unsigned int i = 0; i < n; i++) {
            cout << st[i] << " ";
        }
    }

    int main() {

        unsigned int n;
            if(!(cin >> n)) {
        cout << "An error has occured while reading numbers from line";
        return -1;
    }
        cin.get();
        float *st = new float[n];
        if (str(st, n)) {
            sort(st, n);
            print_st(st, n);
        } else {
            cout << "An error has occured while reading numbers from line";
        }
        delete[] st;
        return 0;
    }
