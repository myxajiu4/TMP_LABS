#include "stdafx.h"
#include "iostream"
#include "vector"
#include <string>
#include <algorithm>
using namespace std;
vector<int> tree;
vector <int> my_tree;


void add(int a) {
	int i;
	if (my_tree.size() == 0)
		my_tree.insert(my_tree.begin(), a);
	else {
		for (i = 0; i < my_tree.size(); i++) {
			if (a <= my_tree[i]) {
				my_tree.insert(my_tree.begin() + i, a);
				break;
			}
		}
		if (i == my_tree.size())
			my_tree.push_back(a);
	}
}
void del(vector <int>&tr) 
{
		my_tree.erase(my_tree.begin());
}
void get(vector<int> tr) {
			tree.push_back(my_tree.front());

}
int main()
{
	int n, a;
	cin >> n;
	string str;
	for (int i = 0; i <= n; i++) 
	{
		cin >> str;
		if (str == "add") 
		{
			cin >> a;
			add(a);
		}
		if (str == "get")
		{
			get(my_tree);
		}
		if (str == "del") 
		{
			del(my_tree);
		}
	}
	for (int i = 0; i < tree.size(); i++)
		cout << tree[i] << "  ";
	return 0;
}
