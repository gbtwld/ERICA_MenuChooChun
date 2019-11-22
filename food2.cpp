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
    vec.push_back({ "진매알밥", 4400 });
    vec.push_back({ "오밥", 4700 });
    vec.push_back({ "카레알밥", 4700 });
    vec.push_back({ "짜장알밥", 4700 });
    vec.push_back({ "매콤치즈알밥", 4900 });
    vec.push_back({ "매콤제육", 5200 });
    vec.push_back({ "불고기알밥", 5300 });

    menu["알촌"] = vec;
}
void Cooksville(){
    vector<pair<string, int>> vec;
    vec.push_back({ "데리치킨스테이크", 4500 });
    vec.push_back({ "데리포크스테이크", 5000 });
    vec.push_back({ "바베큐치킨스테이크", 5400 });
    vec.push_back({ "양념치킨스테이크", 5400 });
    vec.push_back({ "양념포크스테이크", 5500 });
    vec.push_back({ "까르보치킨스테이크", 5900 });
    vec.push_back({ "커리치킨스테이크", 5900 });
    vec.push_back({ "바베큐포크스테이크", 5900 });
    vec.push_back({ "커리포크스테이크", 6000 });
    vec.push_back({ "까르보포크스테이크", 6000 });

    menu["쿡스빌"] = vec;
}
void init() {
    alchon();
    Cooksville();
}

int main() {
    init();
    cout << "식당 입력: ";
    string store; cin >> store;
    auto find = menu.find(store);
    if (find == menu.end()) {
        cout << "이런 식당 없음\n";
    } else {
        vector<pair<string, int>> rest = find->second;
        cout << "사용할 돈: ";
        int money;
        cin >> money;
        for(auto it : rest) {
            string m = it.first;
            int price = it.second;
            if (price <= money) {
                cout << "메뉴: " << m << ", 가격: " << price << "원" <<'\n';
            }else if(price > money){
                cout << "못 시키는 메뉴: " << m << ", 사용할 돈: " << money << "원" << ", 부족한 : " << abs(money-price) << "원" << '\n';
            }
        }
    }
    return 0;
}