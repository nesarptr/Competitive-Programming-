/*TC -> 10^8 operation -> 1s roughly
so If n = 10^4 and m = 10^3
O(n * m) = 10^4 * 10^3 = 10^6 -> less than 1s
*/
/*double c = 6.7777;
double d = 8.7;
cout << setprecision(3);
cout << c;
cout << fixed << setprecision(3);
cout << d;*/
/*int ceil(int a, int b) {
    return (a + b - 1) / b;
}*/
/*builtin func ->
int a = 10;
int b = 20;
char c = 'c';
char D = 'D';
char C = toupper(c);
char d = tolower(D);
swap(a, b), mn({a,b,7,10,20}), max(), pow(a, b), sqrt(a), ceil(float(10/3)), floor(), round(), abs(-10)
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int len = sizeof(arr) / sizeof(0);
reverse(arr, arr + len), sort(arr, arr + len), 
int maxVal = *max_element(arr, arr + len), 
int minValIndex = min_element(arr, arr + len) - arr;
*/
/*vec ->
    vector<int> vec;
    int size = 5;
    int initializing_value = 10;
    vector<int> vec(size, initializing_value);
    vec.back() -> last element of a vector
    vector<vector<int>> vec;
    vector<int> vec[5][6]; like int arr[6][5];
    //Reverse Sort
    bool isGreater(int x, int y) {
        return x > y;
    }
    vector<int> vec = {2,3,5,1,4};
    sort(vec.begin(), vec.end(), isGreater);
    sort(vec.begin(), vec.end(), [](int x, int y) {return x > y;});
    sort(vec.begin(), vec.end(), [](int x, int y) -> bool {return x > y;});
    sort(vec.rbegin(), vec.rend());
    sort(vec.begin(), v.end(), greater<vector<int>>())
    // To remove Duplicate Element
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
*/
/*str -> 
    string s1 = "hello";
    string s2 = "world";
    string s = s1 + " " + s2;
    cout << s << " " << s.size() << " " << s.length() << endl;
    s.push_back('!');
    s.pop_back();
    cout << s[0] << endl;
    for(char c: s) cout << c << endl;
    for (auto it = s.begin(); it != s.end(); it++) cout << *it << endl;
    string::iterator it = s.begin(); auto it2 = s.end();
    it++;
    it++;
    cout << *it << endl; //'l' 
    lower case a -> A = a -= 32;
    upper case B -> b = B += 32;
    reverse(s.begin(), s.end());
    sort(s.begin(), s.eng());
    sort(s.rbegin(), s.rend()); sort(s.begin(), s.end(), greater<char>()); for reverse sort;
    mn(s1, s2);
    s.erase(s.begin() + 1);
    s.substr(0, 2); for substring or continious portion of a string; 0 = index, 2 = substring length;
*/

/* 
void solve() {
    int n; cin >> n;
    vector<int> a(n+1);
    int mn = 1, mx = 1;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] < a[mn]) mn = i;
        if (a[i] > a[mx]) mx = i;
    }
    string t; cin >> t;
    t = " " + t;
    if (t[1] == '1' || t[n] == '1' || t[mn] == '1' || t[mx] == '1') {
        cout << -1 << endl;
        return;
    }
    cout << 5 << endl << 1 << " " << mn << endl << 1 << " " << mx << endl << mn << " " << n << endl << mx << " " << n << endl << min(mn, mx) << " " << max(mn, mx) << endl;
}*/
 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> vec;
        int count = 1;
        int prev = -1;
        for(int i = 0; i<n; i++) {
            int val;
            cin >> val;
            if (prev == val) {
                count++;
                if (count >= m) vec.clear();
            } else {
                count = 1;
                prev = val;
            }
            vec.push_back(val);
        }
        if (vec.size() < n) cout << "NO"<<endl;
        else cout << "YES"<<endl;
        
    }
    return 0;
}
/*int main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        int a, b, n;
        cin >> a >> b >> n;
        int ans = 2;
        if (b >= a || b * n <= a) ans = 1;
        cout << ans << endl;
    }
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        int a, b, n;
        cin >> a >> b >> n;
        int ans = 1;
        bool isTouched = false;
        while (a < b * n) {
            isTouched = true;
            n--;
        }
        if (n > 0 && a >= b * n && isTouched) ans++;
        cout << ans << endl;
    }
    return 0;
}
 
/*int main() {
        int t;
        cin >> t;
        int a, b, c, d;
        for (int i = 0; i < t; i++) {
            cin >> a;
            cin >> b;
            cin >> c;
            cin >> d;
            if (a == b && b == c && c == d) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    return 0;
}*/

