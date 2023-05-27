#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello World";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;

    // string a = "hakhdakjdbakdbadkabdkabdkankbdkabdakdabkdabdkabdabdkabdkab";
    // cout << a.capacity() << endl;
    // a = "hhhhhhhhhhhhhhhhhhjkadgkjdbkdabdskabdjkauygadakdbksdbsbdiufgadiadadskbiufsfsdbskhbakvdbkadvkdvskdbskdbkdakdvakdavdavfkavfkafvaskv";
    // cout << a.capacity() << endl;
    // cout << a.size() << endl;

    // string s = "Hello World";
    // cout << s << endl;
    // s.clear();
    // cout << s << endl;

    // string s = "ads";
    // s.clear();
    // if (s.empty() == true)
    // {
    //     cout << "emply" << endl;
    // }
    // else
    // {
    //     cout << "not emply" << endl;
    // }

    string s;
    cin >> s;
    // s.resize(5);
    // s.resize(20, 'x');
    // cout << s.size() << endl;
    // cout << s << endl;

    s.resize(5);
    cout << s << endl;
    s.resize(11, 'x');
    cout << s << endl;
    return 0;
}