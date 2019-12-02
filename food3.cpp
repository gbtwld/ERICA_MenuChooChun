#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <map>
using namespace std;

map<string, vector<pair<string, int>>> menu;

void Happy(){ //이름 지정
    vector<pair<string, int>> vec;
    //vec.push_back({ "메뉴이름", 금액 });
    vec.push_back({ "해초짜장면", 3000 });
    vec.push_back({ "행복한짬뽕", 4000 });
    vec.push_back({ "해초간짜장", 5000 });
    vec.push_back({ "볶짜면", 5000 });
    vec.push_back({ "볶짬면", 5000 });
    vec.push_back({ "짬짜면", 5000 });
    vec.push_back({ "탕짜면", 6000 });
    vec.push_back({ "탕볶밥", 7000 });
    vec.push_back({ "해물간짜장", 7000 });

    menu["행복한 짬뽕"] = vec;
}

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

void BrotherS() {
    vector<pair<string, int>> vec;
    vec.push_back({ "브라더 함박 스테이크", 4500 });
    vec.push_back({ "치즈 함박", 5000 });
    vec.push_back({ "에그 함박", 5000 });
    vec.push_back({ "카레 함박", 5500 });
    vec.push_back({ "목살 스테이크", 6500 });
    vec.push_back({ "삼겹살 스테이크", 6500 });
    vec.push_back({ "스파이시 치킨 스테이크", 6500 });
    vec.push_back({ "비프 스테이크", 7500 });

    menu["브라더 스테이크"] = vec;
}

void init() {
    //위에서 지정한 식당 이름 적기
    alchon();
    Cooksville();
    Happy();
    BrotherS();
}

int main() {
    cout <<"사용할 돈: ";
    int money;
    cin >> money;
    while(1){
        if(money <=3000) {
            cout << "최소 금액은 3000원입니다. 3000원 이상으로 적어주십시오." << '\n' << "사용할 돈: ";
            cin >> money;
        }else break;
    }
    cin.ignore();
    init();
    cout << "\n1. 행복한 짬뽕\n2. 알촌\n3. 쿡스빌\n4. 브라더 스테이크\n\n식당 입력: ";
    string store;
    getline(cin, store);
    cout << store <<'\n';
    auto find = menu.find(store);
    if (find == menu.end()) {
        cout << "\n이런 식당 없음\n";
    } else {
        vector<pair<string, int>> rest = find->second;
        for(auto it : rest) {
            string m = it.first;
            int price = it.second;
            if (price <= money) {
                cout << "메뉴: " << m << ", 가격: " << price << "원" <<'\n';
            }else if(price > money){
                cout << "못 시키는 메뉴: " << m << ", 사용할 돈: " << money << "원" << ", 부족한 돈: " << abs(money-price) << "원" << '\n';
            }
        }
    }
    return 0;
}
