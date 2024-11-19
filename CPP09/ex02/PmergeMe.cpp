#include "PmergeMe.hpp"

void printArray(std::vector<int> &vect) {
    for (std::vector<int>::iterator it = vect.begin() ; it != vect.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void mergeSortVector(std::vector<int> &vect)
{
    int n = vect.size();

    for (int width = 1; width < n; width *= 2) {
        for (int left = 0; left < n; left += 2 * width) {
            int mid = std::min(left + width - 1, n - 1);
            int right = std::min(left + 2 * width - 1, n - 1);

            std::vector<int> merged;
            int i = left, j = mid + 1;

            while (i <= mid && j <= right) {
                if (vect[i] <= vect[j]) {
                    merged.push_back(vect[i]);
                    ++i;
                }
                else {
                    merged.push_back(vect[j]);
                    ++j;
                }
            }
            while (i <= mid) {
                merged.push_back(vect[i]);
                ++i;
            }
            while (j <= right) {
                merged.push_back(vect[j]);
                ++j;
            }

            for (size_t k = 0; k < merged.size(); ++k) {
                vect[left + k] = merged[k];
            }
        }
    }
}

void mergeSortDeque(std::deque<int> &deque)
{
    int n = deque.size();

    for (int width = 1; width < n; width *= 2) {
        for (int left = 0; left < n; left += 2 * width) {
            int mid = std::min(left + width - 1, n - 1);
            int right = std::min(left + 2 * width - 1, n - 1);

            std::deque<int> merged;
            int i = left, j = mid + 1;

            while (i <= mid && j <= right) {
                if (deque[i] <= deque[j]) {
                    merged.push_back(deque[i]);
                    ++i;
                }
                else {
                    merged.push_back(deque[j]);
                    ++j;
                }
            }
            while (i <= mid) {
                merged.push_back(deque[i]);
                ++i;
            }
            while (j <= right) {
                merged.push_back(deque[j]);
                ++j;
            }

            for (size_t k = 0; k < merged.size(); ++k) {
                deque[left + k] = merged[k];
            }
        }
    }
}