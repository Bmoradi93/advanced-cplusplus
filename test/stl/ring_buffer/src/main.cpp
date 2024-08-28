#include <iostream>
#include <vector>

template<typename T>
class RingBuffer {
private:
    std::vector<T> buffer;
    size_t head = 0;
    size_t tail = 0;
    size_t count = 0;
    size_t capacity;

public:
    explicit RingBuffer(size_t size) : buffer(size), capacity(size) {}

    bool push(const T& value) {
        if (count == capacity) {  // Buffer is full
            std::cerr << "Buffer is full, unable to add new element.\n";
            return false;
        }
        buffer[tail] = value;
        tail = (tail + 1) % capacity;
        count++;
        return true;
    }

    bool pop(T& value) {
        if (count == 0) {  // Buffer is empty
            std::cerr << "Buffer is empty, no elements to pop.\n";
            return false;
        }
        value = buffer[head];
        head = (head + 1) % capacity;
        count--;
        return true;
    }

    void display() {
        size_t index = head;
        for (size_t i = 0; i < count; ++i) {
            std::cout << buffer[index] << " ";
            index = (index + 1) % capacity;
        }
        std::cout << "\n";
    }
};

int main() {
    RingBuffer<int> rb(5);  // Create a ring buffer with capacity 5

    rb.push(1);
    rb.push(2);
    rb.push(3);
    rb.display();  // Displays: 1 2 3

    int x;
    rb.pop(x);
    std::cout << "Popped: " << x << std::endl;  // Output Popped: 1

    rb.display();  // Displays: 2 3

    return 0;
}
