#include <bits/stdc++.h>

using namespace std;

string palidrome(string str)
{
    string fina="";
    for(int i=str.length();i>=0;i--)
    {
        fina+=str[i];
    }
    return fina;
}
int palindromeIndex(string soriginal) {
    
    for(int i=0;i<soriginal.length();i++)
    {
        string temp=soriginal;
        string s1=soriginal.erase(i,1);
        string s2=palidrome(s1);
        if(s2.compare(s1)==0){
            return i;
        }        
    }
    return -1;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
