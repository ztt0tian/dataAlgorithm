#include<iostream>
#include<queue>
using namespace std;
void main() {
	queue<int> yanghui;
	int n;
	cout << "ÊäÈën" << endl;
	cin >> n;
	int i = 1;
	yanghui.push(0);
	yanghui.push(1);
	yanghui.push(0);
	 
	while (i <= n) {
		int j = 1;
		while (j<i+2)
		{
			int k1 = yanghui.front();
			yanghui.pop();
			if (k1 != 0) {
				cout << k1 << " ";
			}
			int k2 = yanghui.front();
			yanghui.push(k1 + k2);
			j++;

		}
		yanghui.push(0);
		cout << endl;
		i++;
	}
	system("pause");
}
