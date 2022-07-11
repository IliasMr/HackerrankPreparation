#include <iostream>

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {

    string str1 = "PM";
    string str2 = "AM";
 
    string s2;                                   //new string 
    int pos;

    
  
 
    if (s[8] == 'P' && s[9] == 'M'){                     //its PM
        s.erase(8);                     //erase the AM


        if (s[0] == '1' && s[1] == '2'){         //its 12:00
            
            s[0] = '0';
            s[1] = '0';
        }
        else{

            s[0] = (int) s[0] + 1;
            s[1] = (int) s[1] + 2;
        } 

     
        

    }
    else{                                   //its AM

        s = s.erase(8);                 //erase the pm - time remains the same


    }        
    

    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
