#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;

//백준 1655번: 가운데를 말해요
//해설: 힙을 사용한 풀이. 

int n;		//입력될 수의 갯수
priority_queue<int> maxq;								//최대 힙
priority_queue<int, vector<int>, greater<int>> minq;	//최소 힙

int main() {
	scanf_s("%d", &n);	//n 받기
	for (int i = 0; i < n; i++) {	//n개의 수 입력 받고 처리하기
		int x;
		scanf_s("%d", &x);

		//최대, 최소 큐 중 어디에 입력값을 넣을지 판별(maxq가 항상 minq보다 크기가 같거나 1커야함)
		if (maxq.size() == minq.size()) {
			maxq.push(x);
		}
		else {
			minq.push(x);
		}

		//큐 정리(minq의 top이 maxq보다 항상 커야함)
		if (maxq.size() != 0 && minq.size() != 0 && maxq.top() > minq.top()) {
			int maxvalue = maxq.top();
			int minvalue = minq.top();
			maxq.pop();
			minq.pop();
			maxq.push(minvalue);
			minq.push(maxvalue);
		}

		printf("%d\n", maxq.top());
	}
	return 0;
}
