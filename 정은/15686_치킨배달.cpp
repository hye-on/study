#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int N, M, answer;
int MAP[50][50];
int isSelect[13];
vector<pair<int, int>> House, Chicken, V;

int distance(){  // 치킨 거리를 구하는 함수
    int sum = 0;
    for (int i = 0; i < House.size(); i++){
        int x = House[i].first;
        int y = House[i].second;
        int d = 99999999;
        for (int j = 0; j < V.size(); j++){
            int xx = V[j].first;
            int yy = V[j].second;
            int dist = abs(xx - x) + abs(yy - y);
            d = min(d, dist);
        }
        sum = sum + d;
    }
    return sum;
}

void Select_Chicken(int idx, int cnt){  // 치킨집을 선택하는 함수
    if(cnt == M){
        answer = min(answer, distance());
        return;
    }
    for(int i = idx; i < Chicken.size(); i++){
        if(isSelect[i] == 1)
            continue;

        isSelect[i] = 1;
        V.push_back(Chicken[i]);
        Select_Chicken(i, cnt + 1);
        // 백트래킹
        isSelect[i] = 0;
        V.pop_back();
    }
}

int main(){
    answer = 99999999;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> MAP[i][j];
            if(MAP[i][j] == 1)
                House.push_back(make_pair(i, j));
            if(MAP[i][j] == 2)
                Chicken.push_back(make_pair(i, j));
        }
    }

    Select_Chicken(0, 0);
    cout << answer << '\n';

    return 0;
}