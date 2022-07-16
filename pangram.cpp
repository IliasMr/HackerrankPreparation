#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {

    int i;
     set<char> lett;                           //stores element in sorted order - all the elements have unique values 

    for (i=0; i<s.size(); i++){
        
        if (isalpha(s[i]) != 0  ){                  //if it is alhpabet
            lett.insert(tolower(s[i]));             //insert the lower letter to the set (for removing duplicates)
        }
        
    }

    if (lett.size() == 26)
        return "pangram";
    else
        return "not pangram";


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
