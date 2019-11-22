#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <map>
using namespace std;

map<string, vector<pair<string, int>>> menu;
void alchon() {
    vector<pair<string, int>> vec;
    vec.push_back({ "순한알밥", 3900 });
    vec.push_back({ "약매알밥", 4300 });
    vec.push_back({ "매콤알밥", 4300 });

    menu["알촌"] = vec;
}

void init() {
    alchon();
}

int main() {
    init();
    cout << "식당 입력: ";
    string store; cin >> store;
    cout << store;
    cout << "돈: ";
    int money; cin >> money;
    auto it = menu.find(store);
    if (it == menu.end()) {
        cout << "이런 식당 없음\n";
    } else {
        vector<pair<string, int>> rest = it->second;
        for (auto it : rest) {
            string m = it.first;
            int price = it.second;
            if (price <= money) {
                cout << "메뉴: " << m << ", 가격: " << price << '\n';
            }
        }
    }
    return 0;
}