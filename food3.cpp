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

void MDSV() {
    vector<pair<string, int>> vec;
    vec.push_back({ "양푼 돼지고기 김치찌개(2~3인)", 13000 });
    vec.push_back({ "양푼명태 내장탕(2~3인)", 13000 });
    vec.push_back({ "닭 한마리 김치찌개", 20000 });

    menu["명동찌개마을"] = vec;
}

void One(){ 
	vector<pair<string, int>> vec;
	vec.push_back({ "제육덮밥", 6000 });
	vec.push_back({ "김치제육덮밥", 6000 });
	vec.push_back({ "치킨 와사비마요", 6000 });
	vec.push_back({ "새우튀김 와사비마요", 7000 });
	vec.push_back({ "소불고기덮밥", 7000 });
	vec.push_back({ "마늘대패삼겹덮밥", 7000 });
	vec.push_back({ "함박스테이크덮밥", 7000 });
	vec.push_back({ "큐브스테이크덮밥", 8000 });
	vec.push_back({ "연어스테이크덮밥", 8000 });
	vec.push_back({ "새우장비빔밥", 8000 });
	vec.push_back({ "생새우비빔밥", 8000 });
	vec.push_back({ "날치알아보카도", 8000 });
	vec.push_back({ "생연어덮밥", 8000 });
	vec.push_back({ "연어장덮밥", 8000 });

	menu["한그릇"] = vec;
}

void UMe() {
    vector<pair<string, int>> vec;
    vec.push_back({ "유라멘", 6900 });
    vec.push_back({ "메라멘", 6900 });
    vec.push_back({ "차슈덮밥", 6900 });

    menu["유메식당"] = vec;
}
void MIHARU() {
    vector<pair<string, int>> vec;
    vec.push_back({ "부타동 덮밥", 6000});
    vec.push_back({ "규동 덮밥", 6500});
    vec.push_back({ "함박스테이크 덮밥", 6500});

    menu["미하루식당"] = vec;
}

void PlanB() {
    vector<pair<string, int>> vec;
    vec.push_back({ "치킨 라이스", 3500 });
    vec.push_back({ "소고기 라이스", 4000 });
    vec.push_back({ "치킨 감자", 4000 });
    vec.push_back({ "새우 감자", 4000 });
    vec.push_back({ "미트볼 감자", 4000 });
    vec.push_back({ "소고기 베이컨 라이스", 4500 });
    vec.push_back({ "소시지 감자", 4500 });
    vec.push_back({ "소고기 베이컨 감자", 5000 });

    menu["밀플랜비"] = vec;
}

void EStand() {
    vector<pair<string, int>> vec;
    vec.push_back({ "이서제육", 6000 });
    vec.push_back({ "김치찌개", 6000 });
    vec.push_back({ "애호박찌개", 6000 });
    vec.push_back({ "애호박칼국수(2인이상)", 7000 });
    vec.push_back({ "이서소불고기(2인이상)", 7000 });
    vec.push_back({ "초벌 막창(200g)", 11000 });
    vec.push_back({ "생 삼겹살(200g)", 11000 });
    vec.push_back({ "생 목살(200g)", 11000 });
    vec.push_back({ "초벌 삼겹살(200g)", 12000 });
    vec.push_back({ "초벌 목살(200g)", 12000 });

    menu["이서식당"] = vec;
}

void

void init() {
    //위에서 지정한 식당 이름 적기
    alchon(); //알촌
    Cooksville(); //쿡스빌
    Happy(); //행복한짬뽕
    BrotherS(); //브라더 스테이크
	MDSV(); //명동찌개마을
	One(); //한그릇
	UMe(); //유메식당
    MIHARU(); //미하루 덮밥
    PlanB(); //밀플랜비
    EStand(); //이서식당
}

int main() {
    cout <<"사용할 돈: ";
    int money;
    cin >> money;
    while(1){
        if(money < 3000) {
            cout << "\n최소 금액은 3000원입니다. 3000원 이상으로 적어주십시오." << "\n\n사용할 돈: ";
            cin >> money;
        }else break;
    }
    cin.ignore();
    init();
    cout << "\n1. 행복한 짬뽕\n2. 알촌\n3. 쿡스빌\n4. 브라더 스테이크\n5. 명동찌개마을\n6. 유메식당\n7. 미하루식당\n8. 밀플랜비\n9. 이서식당\n\n식당 입력: ";
    string store;
    getline(cin, store);
    cout << '\n';
    auto find = menu.find(store);
    if (find == menu.end()) {
        cout << "\n이런 식당 없음\n";
    } else {
        vector<pair<string, int>> rest = find->second;
        for(auto it : rest) {
            string m = it.first;
            int price = it.second;
            if (price <= money) {
                cout << "메뉴: " << m << ", 가격: " << price << "원\n";
            }else if(price > money){
                cout << "못 시키는 메뉴: " << m << ", 사용할 돈: " << money << "원" << ", 부족한 돈: " << abs(money-price) << "원\n";
            }
        }
    }
    return 0;
}
