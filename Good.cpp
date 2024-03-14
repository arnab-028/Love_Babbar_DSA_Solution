#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    string ip1,ip2;
    getline(cin,ip1);
    getline(cin,ip2);
    int val = 0;
    vector<int> variant;
    for(auto x:ip1) {
        variant.push_back((int)x);
    }
    sort(variant.begin(),variant.end());
    int end = 0;
    int before = (int)ip1[0];
    for(auto x:ip2) {
        int brr = (int) x;
        int l = 0,r=variant.size()-1;
        int val = INT_MAX;
        int present = -1;
        while(l<=r) {
            int central = (l+r)/2;
            if(variant[central] == brr) {
                present = before;
                val = 0;
                break;
            }
            else if(variant[central] < brr) {
                if(abs(variant[central]-brr) < val) {
                    val = abs(variant[central]-brr);
                    present = variant[central];
                }
                else if(abs(variant[central]-brr) == val) {
                    if(abs(present-before) > abs(variant[central]-before)) {
                        present = variant[central];
                        val = abs(variant[central]-before);
                    }
                    else {
                        val = abs(present-before);
                    }
                }
                l=central+1;
            }
            else {
                if(abs(variant[central]-brr) < val) {
                    val = abs(variant[central]-brr);
                    present = variant[central];
                }
                else if(abs(variant[central]-brr) == val) {
                    if(abs(present-before) > abs(variant[central]-before)) {
                        present = variant[central];
                        val = abs(variant[central]-before);
                    }
                    else {
                        val = abs(present-before);
                    }
                }
                r=central-1;
            }
        }
        before = present;
        end+=val;
    }
    cout << end;
}