#include <iostream>
#include <vector>

template <typename T>
class Deque {
private:
    std::vector<T> queue; // Vector para almacenar los elementos de la deque

public:
    Deque() {}

    void FrontEnqueue(T element) {
        queue.insert(queue.begin(), element); //inserta los elementos
    }

    void BackDequeue() {
        if (!queue.empty()) {
            queue.pop_back();
        }
    }

    T Front() {
        if (!queue.empty()) {
            return queue.front();
        }

        std::cout << "Queue is empty. No front element.\n";
        return T();
    }

    T Back() {
        if (!queue.empty()) {
            return queue.back();
        }

        std::cout << "Queue is empty. No back element.\n";
        return T();
    }

    void Print() {
        if (queue.empty()) {
            std::cout << "Queue is empty.\n";
            return;
        }

        for (const T& element : queue) {
            std::cout << element << ", "; //imprime lo elementos 
        }
        std::cout << std::endl;
    }
};

int main() {
    Deque<int> deque;

    // FrontEnqueue
    deque.FrontEnqueue(5);
    deque.FrontEnqueue(4);
    deque.FrontEnqueue(3);
    deque.FrontEnqueue(2);
    deque.FrontEnqueue(1);
    std::cout << "After FrontEnqueue:\n";
    deque.Print();
    std::cout << std::endl;

    // BackDequeue
    deque.BackDequeue();
    deque.BackDequeue();
    std::cout << "After BackDequeue:\n";
    deque.Print();
    std::cout << std::endl;

    // Front
    int frontElement = deque.Front();
    std::cout << "Front element: " << frontElement << std::endl;

    // Back
    int backElement = deque.Back();
    std::cout << "Back element: " << backElement << std::endl;

    return 0;
}
