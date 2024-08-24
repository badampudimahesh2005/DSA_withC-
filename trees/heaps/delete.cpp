#include <iostream>
#include <vector>

void minHeapify(std::vector<int>& arr, int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i) {
        std::swap(arr[i], arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

void buildMinHeap(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        minHeapify(arr, n, i);
}

int extractMin(std::vector<int>& arr) {
    if (arr.empty()) {
        // Handle empty heap
        std::cerr << "Heap is empty. Cannot extract minimum element." << std::endl;
        return -1;  // You can return an appropriate value or throw an exception
    }

    int root = arr[0];
    int lastElement = arr.back();
    arr.pop_back();
    if (!arr.empty()) {
        arr[0] = lastElement;
        int i = 0;

        while (true) {
            int smallest = i;
            int left = 2 * i + 1;
            int right = 2 * i + 2;

            if (left < arr.size() && arr[left] < arr[smallest])
                smallest = left;

            if (right < arr.size() && arr[right] < arr[smallest])
                smallest = right;

            if (smallest == i)
                break;

            std::swap(arr[i], arr[smallest]);
            i = smallest;
        }
    }

    return root;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> events(n);

    for (int i = 0; i < n; i++) {
        std::cin >> events[i];
    }

    buildMinHeap(events);

    int minElement = extractMin(events);

    for (int i = 0; i < events.size(); i++) {
        std::cout << events[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Min element removed: " << minElement << std::endl;

    return 0;
}
