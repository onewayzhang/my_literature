#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v1 = { 3,5,14 }, v2 = { 1,2,3,4,5,6,7,8,9,10 }, jilu;
	vector<int>::size_type j1, j2, i = 0;



	for (j1 = 0; j1 != v1.size(); ++j1) {


		for (j2 = 0; j2 != v2.size(); ++j2) {

			if (v1[j1] == v2[j2]) {
				jilu.push_back(j1);
				

				break;   //注意这里跳出内层 for循环
			}
		}



	}



	for (auto j3 : jilu) {
		cout << j3 << endl;
	}

	return 0;
}
