# 🚀 MY DSA SERIES (C++)

Welcome to **MY DSA SERIES** repository!  
This repo is a collection of **Data Structures and Algorithms (DSA)** problems and solutions implemented in **C++**.  
The goal of this repository is to build a strong foundation of problem-solving skills and prepare for coding interviews and competitive programming.

---

## 📘 Contents with Examples  

### 🔹 Basics of DSA  
- **Complexity Analysis (Time & Space)**  
- **Recursion Example (Factorial)**  
```cpp
int fact(int n) {
    if(n == 0) return 1;
    return n * fact(n-1);
}

🔹 Arrays
Binary Search Example
int binarySearch(vector<int>& arr, int x) {
    int l = 0, r = arr.size()-1;
    while(l <= r) {
        int mid = l + (r-l)/2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}


🔹 Strings
Palindrome Check

bool isPalindrome(string s) {
    int l = 0, r = s.size()-1;
    while(l < r) {
        if(s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

🔹 Linked List
Node Structure

struct Node {
    int data;
    Node* next;
    Node(int val) { data = val; next = NULL; }
};

🔹 Stack
Using STL

stack<int> st;
st.push(10);
st.push(20);
cout << st.top(); // 20
st.pop();

🔹 Queue
Using STL

queue<int> q;
q.push(1);
q.push(2);
cout << q.front(); // 1
q.pop();

🔹 Trees
Binary Tree Traversal (Inorder)

struct Node {
    int data;
    Node* left, *right;
    Node(int val) { data = val; left = right = NULL; }
};
void inorder(Node* root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

🔹 Graphs
BFS Traversal

void bfs(int start, vector<vector<int>>& adj) {
    vector<bool> visited(adj.size(), false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while(!q.empty()) {
        int node = q.front(); q.pop();
        cout << node << " ";
        for(int neigh : adj[node]) {
            if(!visited[neigh]) {
                visited[neigh] = true;
                q.push(neigh);
            }
        }
    }
}

🔹 Dynamic Programming
Fibonacci (Top-Down Memoization)

int dp[1000];
int fib(int n) {
    if(n <= 1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fib(n-1) + fib(n-2);
}

🔹 Sorting Algorithms
Quick Sort Example

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high], i = low-1;
    for(int j=low;j<high;j++) {
        if(arr[j] < pivot) {
            i++; swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}
void quickSort(vector<int>& arr, int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

🔹 Advanced Topics
Disjoint Set (Union-Find)

vector<int> parent, rankArr;

int findParent(int node) {
    if(node == parent[node]) return node;
    return parent[node] = findParent(parent[node]);
}
void unionSets(int u, int v) {
    u = findParent(u);
    v = findParent(v);
    if(u != v) {
        if(rankArr[u] < rankArr[v]) parent[u] = v;
        else if(rankArr[u] > rankArr[v]) parent[v] = u;
        else {
            parent[v] = u;
            rankArr[u]++;
        }
    }
}


📂 Repository Structure
MY_DSA_SERIES/
│-- Arrays/
│-- Strings/
│-- Linked_List/
│-- Stack/
│-- Queue/
│-- Trees/
│-- Graphs/
│-- Dynamic_Programming/
│-- Sorting_Searching/
│-- Advanced/
│-- README.md

🛠️ Language Used

C++ (Primary)

📌 About Me

👤 Sadgyan Singh

🌐 GitHub: ssadgyan

💼 LinkedIn: Sadgyan Singh

⭐ Contribution

Feel free to fork this repository and contribute by adding more DSA problems and solutions in C++.
Pull requests are always welcome!

<!---LeetCode Topics Start-->
# LeetCode Topics
## Math
|  |
| ------- |
| [0007-reverse-integer](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/0007-reverse-integer) |
## Array
|  |
| ------- |
| [0074-search-a-2d-matrix](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/0074-search-a-2d-matrix) |
| [0081-search-in-rotated-sorted-array-ii](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/0081-search-in-rotated-sorted-array-ii) |
| [0153-find-minimum-in-rotated-sorted-array](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/0153-find-minimum-in-rotated-sorted-array) |
| [0717-1-bit-and-2-bit-characters](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/0717-1-bit-and-2-bit-characters) |
| [2274-keep-multiplying-found-values-by-two](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/2274-keep-multiplying-found-values-by-two) |
## Binary Search
|  |
| ------- |
| [0074-search-a-2d-matrix](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/0074-search-a-2d-matrix) |
| [0081-search-in-rotated-sorted-array-ii](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/0081-search-in-rotated-sorted-array-ii) |
| [0153-find-minimum-in-rotated-sorted-array](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/0153-find-minimum-in-rotated-sorted-array) |
## Hash Table
|  |
| ------- |
| [2274-keep-multiplying-found-values-by-two](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/2274-keep-multiplying-found-values-by-two) |
## Sorting
|  |
| ------- |
| [2274-keep-multiplying-found-values-by-two](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/2274-keep-multiplying-found-values-by-two) |
## Simulation
|  |
| ------- |
| [2274-keep-multiplying-found-values-by-two](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/2274-keep-multiplying-found-values-by-two) |
## Matrix
|  |
| ------- |
| [0074-search-a-2d-matrix](https://github.com/SadgyanSingh/MY_DSA_SERIES/tree/master/0074-search-a-2d-matrix) |
<!---LeetCode Topics End-->