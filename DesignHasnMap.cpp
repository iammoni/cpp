#define LEN   1000
#define DEPTH 1000
class MyHashMap {
private:
    vector<vector<int>> arr;
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        arr.resize(LEN, vector<int>(DEPTH, -1)s);
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        int firstIndex = key % LEN, secondIndex = key / LEN;
        arr[firstIndex][secondIndex] = value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        int firstIndex = key % LEN, secondIndex = key / LEN;
        return arr[firstIndex][secondIndex];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int firstIndex = key % LEN, secondIndex = key / LEN;
        arr[firstIndex][secondIndex] = -1;
    }
};