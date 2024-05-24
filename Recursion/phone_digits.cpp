#include <iostream>
void solve(vector<string> vect,int index,string &lstr,vector<string> &ans)
{
    if(index == vect.size()){
        ans.push_back(lstr);
        return;
    }

    for(int i=0;i<vect[index].length();i++)
    {
        string x = vect[index];
        lstr.push_back(x[i]);
        solve(vect,index+1,lstr,ans);
        lstr.pop_back();

    }
}

vector<string> possibleWords(int a[], int N)
{
    //Your code here
    vector<string> vect;
    vector<string> str;
    vector<string> ans;
    string lstr;
    str = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    for(int i=0;i<N;i++)
    {
        vect.push_back(str[a[i]-2]);
    }

    solve(vect,0,lstr,ans);

    return ans;
}

