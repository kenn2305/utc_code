    #include <iostream>
    #include <map>
    #include <set>
    #include <algorithm>
    #include <vector>
    using namespace std;
    int main(){
        int n , k ;
        cin >> n ;
        string s ;
        map<string,int> mp;
        while (n--){
            cin >> k ;
            for (int i = 0 ; i < k ; i++){
                cin >> s ;
                mp[s]++;
            }
        }
        set<int> c;
        for (auto it : mp){
            c.insert(it.second);
        }
        vector<string> max1;
        vector<string> max2;
        for (auto it : mp){
            if (it.second == *c.rbegin()){
                max1.push_back(it.first);
            }
            if (it .second == *c.rbegin()-1){
                max2.push_back(it.first);
            }
        }
        sort(max1.begin(),max1.end());
        sort(max2.begin(),max2.end());
        if (max1.size() == 1){
            cout << max1[0] << endl << max2[0] << endl ;
        } else {
            for (auto it : max1){
                cout << it << endl ;
            }
        }
        return 0;
    }