#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {

    vector<char> sos = {'S', 'O', 'S'};

    int numm = s.size() / 3;


    int ind = 0;

    int chnum = 0;                  //changed letters

    for (int i=0; i<s.size(); i++){

        if (s[i] != sos[ind])
            chnum++;

        ind++;
        if (ind > 2)
            ind = 0;



    }

   

    return chnum;




}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
