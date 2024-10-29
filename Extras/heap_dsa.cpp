#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

struct minHeap_compare {
    bool operator() (const int& lhs, const int& rhs) const {
        return lhs > rhs;
    }
};

std::vector<int> heap_top_3(std::vector<int>& list) {
    std::priority_queue<int, std::vector<int>, minHeap_compare> min_heap;

    for (const auto& l: list) {
        min_heap.push(l);
    }

    std::vector<int> res;
    for(int i = 0; i< 3; i++) {
        int k = min_heap.top();
        res.push_back(k);
        min_heap.pop();
    }

    return res;
}

int main()
{
    int n;
    std::cin >> n;

    if(n < 3) {
        std::cout << "Length of input numbers must be at least three";
        return 0;
    }

    int count = 0;
    std::vector<int> list;

    while(count < n) {
        int k;
        std::cin >> k;
        list.push_back(k);
        count++;
    }

    std::vector<int> res = heap_top_3(list);

    for (const auto& i: res) {
        std::cout << i << " ";
    }

    return 0;
}