#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'weightedUniformStrings' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER_ARRAY queries
 */

vector<string> weightedUniformStrings(string s, vector<int> queries)
{
    std::map<char, int> mymap;
    int value = 0;
    vector<int> data;
    for (char c = 'a'; c <= 'z'; c++)
    {
        value++;
        mymap[c] = value;
    }
    vector<string> final;
    string f = s;
    int counts = 1;
    for (int i = 0; i < f.length(); i++)
    {

        int j = i;
        if (f[j] != f[j + 1] && f[j] != f[j - 1])
        {
            data.push_back(mymap[f[j]] * 1);
        }
        while (f[j] == f[j + 1])
        {
            if (counts == 1)
            {
                data.push_back(mymap[f[j]] * 1);
            }
            counts++;

            data.push_back(mymap[f[j]] * counts);

            j++;
        }

        i = j;
        counts = 1;
    }
    vector<int>::iterator it;
    for (int i = 0; i < queries.size(); i++)
    {
        it = find(data.begin(), data.end(), queries[i]);
        if (it != data.end())
        {
            final.push_back("Yes");
        }
        else
        {
            final.push_back("No");
        }
    }
    return final;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string queries_count_temp;
    getline(cin, queries_count_temp);

    int queries_count = stoi(ltrim(rtrim(queries_count_temp)));

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++)
    {
        string queries_item_temp;
        getline(cin, queries_item_temp);

        int queries_item = stoi(ltrim(rtrim(queries_item_temp)));

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (size_t i = 0; i < result.size(); i++)
    {
        fout << result[i];

        if (i != result.size() - 1)
        {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
