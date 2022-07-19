#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr) {


    int i;
    int n = arr.size();
    
    vector<int> freq(5,0);                              //save the freq of each type

    for (i=0; i<n; i++){

        if (arr[i] == 1)
            freq[0]++;
        else if (arr[i] == 2)
            freq[1]++;
        else if (arr[i] == 3)
            freq[2]++;
        else if (arr[i] == 4)
            freq[3]++;
        else 
            freq[4]++;

    }


    int max1, max2, max1pos, max2pos;
    max1 = -1;
    max1pos = 0;
    
    for(i=0; i<5; i++){
        if (freq[i] >= max1){
            max2 = max1;
            max2pos = max1pos;

            max1 = freq[i];
            max1pos = i;

        } 


    }

    if (max1 == max2){
        return min(max1pos+1 ,max2pos+1);
    }
    else 
        return max1pos + 1;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
