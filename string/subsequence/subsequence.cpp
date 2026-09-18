#include <iostream>
using namespace std;


bool isSubSeq(string& s1, string& s2){
    
    int m = s1.length(), n = s2.length();
  
    // For s1 to be subsequence, its length must
    // smaller than s2
    if (m > n) return false;
  
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (s1[i] == s2[j])
        {
            i++;
        }
        
        j++;
    }
  
    return i == m;
}

int main(){
    string s1 = "gksrek";
    string s2 = "geeksforgeeks";
    isSubSeq(s1, s2) ? cout << "true" : cout << "false";
    return 0;
}