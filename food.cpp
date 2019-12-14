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
    menu["1"] = vec;
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
    menu["2"] = vec;
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
    menu["3"] = vec;
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
    menu["4"] = vec;
}

void MDSV() {
    vector<pair<string, int>> vec;
    vec.push_back({ "양푼 돼지고기 김치찌개(2~3인)", 13000 });
    vec.push_back({ "양푼명태 내장탕(2~3인)", 13000 });
    vec.push_back({ "닭 한마리 김치찌개", 20000 });

    menu["명동찌개마을"] = vec;
    menu["5"] = vec;
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
    menu["6"] = vec;
}

void UMe() {
    vector<pair<string, int>> vec;
    vec.push_back({ "유라멘", 6900 });
    vec.push_back({ "메라멘", 6900 });
    vec.push_back({ "차슈덮밥", 6900 });

    menu["유메식당"] = vec;
    menu["7"] = vec;
}
void MIHARU() {
    vector<pair<string, int>> vec;
    vec.push_back({ "부타동 덮밥", 6000});
    vec.push_back({ "규동 덮밥", 6500});
    vec.push_back({ "함박스테이크 덮밥", 6500});

    menu["미하루식당"] = vec;
    menu["8"] = vec;
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
    menu["9"] = vec;
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
    menu["10"] = vec;
}

void Positano() {
    vector<pair<string, int>> vec;
    vec.push_back({ "통삼겹스테이크 정식", 6900 });
    vec.push_back({ "허니쉬림프 정식", 6900 });
    vec.push_back({ "간장새우장 정식", 6900 });
    vec.push_back({ "스테이크 정식", 7900 });
    vec.push_back({ "소맛보새우 정식", 7900 });
    vec.push_back({ "BBQ 크림파스타", 14900 });
    vec.push_back({ "스테이크 크림 파스타", 15900 });
    vec.push_back({ "핫스테이크 SET", 15900 });
    vec.push_back({ "바베큐 폭립 샘플러", 15900 });
    vec.push_back({ "크랩 로제 파스타", 16900 });
    vec.push_back({ "쉬림프 오일 파스타", 16900 });
    vec.push_back({ "벌집퐁듀&쉬림프박스 SET", 16900 });

    menu["포지타노"] = vec;
    menu["11"] = vec;
}

void Pizzalia() {
    vector<pair<string, int>> vec;
    vec.push_back({ "페퍼로니피자", 12000 });
    vec.push_back({ "콤비네이션피자", 12000 });
    vec.push_back({ "불고기피자", 12000 });
    vec.push_back({ "치킨피자", 12000 });
    vec.push_back({ "야채피자", 12000 });
    vec.push_back({ "베이컨피자", 12000 });
    vec.push_back({ "더블치즈피자", 12000 });

    menu["피자리아"] = vec;
    menu["12"] = vec;
}

void Ddeli() {
    vector<pair<string, int>> vec;
    vec.push_back({ "정통 퓨전 라볶이", 5500 });
    vec.push_back({ "매콤 비프 라볶이", 6000 });
    vec.push_back({ "크림 치즈 라볶이", 6500 });
    vec.push_back({ "정통 퓨전 그라탕", 7000 });
    vec.push_back({ "매콤 비프 그라탕", 7000 });
    vec.push_back({ "디델리 김밥", 3000 });
    vec.push_back({ "참치 김밥", 3500 });
    vec.push_back({ "치즈 김밥", 3000 });
    vec.push_back({ "치즈 참치 김밥", 3500 });

    menu["디델리"] = vec;
    menu["13"] = vec;
}

void Dosmas() {
    vector<pair<string, int>> vec;
    vec.push_back({ "닭고기 부리또", 3500 });
    vec.push_back({ "섞어서 부리또", 3500 });
    vec.push_back({ "치킨팝콘 부리또", 4000 });
    vec.push_back({ "소고기 부리또", 4000 });
    vec.push_back({ "제육 부리또", 4000 });
    vec.push_back({ "텐더 부리또", 4000 });

    menu["도스마스"] = vec;
    menu["14"] = vec;
}

void JjigaeJjigae() {
    vector<pair<string, int>> vec;
    vec.push_back({ "닭매운탕", 6000 });
    vec.push_back({ "부대찌개", 6000 });
    vec.push_back({ "버섯찌개", 6000 });
    vec.push_back({ "순두부찌개", 6000 });
    vec.push_back({ "김치찌개", 6000 });
    vec.push_back({ "된장찌개", 6000 });
    vec.push_back({ "알탕찌개", 6000 });
    vec.push_back({ "제육볶음", 6000 });

    menu["찌개찌개"] = vec;
    menu["15"] = vec;
}

void Vicepresident() {
    vector<pair<string, int>> vec;
    vec.push_back({ "부대찌개", 5000 });
    vec.push_back({ "닭갈비", 5000 });
    vec.push_back({ "낙지볶음", 6000 });
    vec.push_back({ "우렁된장찌개", 4500 });
    vec.push_back({ "제육볶음", 5000 });
    vec.push_back({ "치즈닭갈비", 6000 });
    vec.push_back({ "순두부찌개", 4000 });

    menu["부대통령"] = vec;
    menu["16"] = vec;
}

void init() {
    //위에서 지정한 식당 이름 적기
    alchon(); //알촌
    Cooksville(); //쿡스빌
    Happy(); //행복한짬뽕
    BrotherS(); //브라더스테이크
    MDSV(); //명동찌개마을
    One(); //한그릇
    UMe(); //유메식당
    MIHARU(); //미하루덮밥
    PlanB(); //밀플랜비
    EStand(); //이서식당
    Positano(); //포지타노
    Pizzalia(); //피자리아
    Ddeli(); //디델리
    Dosmas(); //도스마스
    JjigaeJjigae(); //찌개찌개
    Vicepresident(); //부대통령
}

int main() {
    while (1) {
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
        cout << "\n1. 행복한 짬뽕\n2. 알촌\n3. 쿡스빌\n4. 브라더 스테이크\n5. 명동찌개마을\n6. 유메식당\n7. 미하루식당\n8. 밀플랜비\n9. 이서식당\n10. 한그릇\n11. 포지타노\n12. 피자리아\n""13. 디델리\n14. 도스마스 \n15. 찌개찌개\n16. 부대통령\n\n식당 입력: ";
        string store;
        getline(cin, store);
        store.erase(remove(store.begin(), store.end(), ' ' ), store.end());
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
        char ans;
        cout << "\n계속 식당을 입력하시겠습니까? [Y / N]\n";
        cin >> ans;
        while (1) {
            if (ans == 'Y' || ans == 'y') break;
            else if (ans == 'N' || ans == 'n') {
                cout << "프로그램을 종료합니다." << '\n';
                exit(0);
            }
            else if(ans == ' ') continue;
            else if(ans != 'Y' && ans !='y' && ans != 'N' && ans != 'n'){
                cout << "잘못 입력하셨습니다. 다시 입력해주십시오." << '\n';
                cout << "\n계속 식당을 입력하시겠습니까? [Y / N]\n";
                cin >> ans;
            }
            else break;
        }
    }
}
