#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    string str;
    //string strnew;

    while (getline(cin, str)){


        vector<int> spacepos;

        if (str[0] == 'S'){                         //split operation       
            str = str.erase(0, 4);
            
            for (int i=0; i <str.size(); i++){
                if (isupper(str[i])){
                        
                    str[i] = str[i] + 32;               //converting to lowercase

                    if (i != 0)                         //not in the first place
                        str.insert(i, " ");
                }

                if (str[i] == '('){
                    str.erase(i, 2);
                }
            }    

        }
        else{                                                //combine operation

            if ( str[2] == 'V' || str[2] == 'M'){
                
                if (str[2] == 'M'){
                    str.append("()");
                }

                str = str.erase(0, 4);


                for (int i=0; i<str.size(); i++){
                    if (str[i] == ' '){
                        str[i+1] = str[i+1] - 32;                   //convert lowercase to uppercase

                        str.erase(i, 1);

                    }           
                }  
            }   
            else{                                                   // C and C
                str = str.erase(0, 4);


                for (int i=0; i<str.size(); i++){
                    if (str[i] == ' '){
                        str[i+1] = str[i+1] - 32;                   //convert lowercase to uppercase

                        str.erase(i, 1);

                    }
                
                }
            str[0] = str[0] - 32; 
            }
        }    
        
        cout << str << endl;



    }
    return 0;
}
