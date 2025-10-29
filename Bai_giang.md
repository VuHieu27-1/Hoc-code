# 📘 Tổng Hợp Thuật Toán Lập Trình Phổ Biến Trong C++

Tài liệu này liệt kê các **thuật toán kinh điển** thường được cài đặt bằng C++, chia theo nhóm chức năng.

---

## 🅰️ A. Thuật Toán Sắp Xếp (Sorting Algorithms)

| Tên Thuật Toán | Mô Tả Ngắn |
|----------------|-------------|
| **Bubble Sort** | So sánh cặp phần tử kề nhau và hoán đổi nếu sai thứ tự. |
| **Selection Sort** | Chọn phần tử nhỏ nhất và đưa về đầu dãy. |
| **Insertion Sort** | Chèn phần tử vào đúng vị trí trong phần đã sắp. |
| **Merge Sort** | Chia mảng, sắp từng phần, rồi trộn lại. |
| **Quick Sort** | Chọn pivot, chia mảng nhỏ hơn/lớn hơn pivot, đệ quy. |
| **Heap Sort** | Dựa trên cấu trúc Heap để sắp tăng dần. |
| **Counting Sort** | Đếm tần suất phần tử (áp dụng với giá trị nguyên nhỏ). |
| **Radix Sort** | Sắp theo từng chữ số từ phải sang trái. |
| **Bucket Sort** | Phân chia dữ liệu vào các "xô" rồi sắp từng xô. |
| **Shell Sort** | Dạng cải tiến của Insertion Sort, giảm khoảng cách dần. |

---

## 🅱️ B. Thuật Toán Tìm Kiếm (Searching Algorithms)

| Tên Thuật Toán | Mô Tả Ngắn |
|----------------|-------------|
| **Linear Search** | Duyệt tuần tự từng phần tử. |
| **Binary Search** | Chia đôi mảng (đã sắp xếp) để tìm nhanh hơn. |
| **Jump Search** | Nhảy theo bước cố định, sau đó tìm tuyến tính trong khối. |
| **Interpolation Search** | Ước lượng vị trí phần tử cần tìm dựa trên giá trị. |
| **Exponential Search** | Mở rộng khoảng tìm kiếm theo lũy thừa của 2. |

---

## 🧭 C. Thuật Toán Đồ Thị (Graph Algorithms)

| Tên Thuật Toán | Mô Tả Ngắn |
|----------------|-------------|
| **DFS (Depth-First Search)** | Duyệt sâu — đi càng sâu càng tốt trước khi quay lại. |
| **BFS (Breadth-First Search)** | Duyệt rộng — đi theo tầng/lớp. |
| **Dijkstra** | Tìm đường đi ngắn nhất (trọng số dương). |
| **Bellman-Ford** | Tìm đường đi ngắn nhất (có thể có trọng số âm). |
| **Floyd–Warshall** | Tìm đường đi ngắn nhất giữa mọi cặp đỉnh. |
| **Kruskal (MST)** | Tìm cây khung nhỏ nhất bằng sắp xếp cạnh. |
| **Prim (MST)** | Tìm cây khung nhỏ nhất bằng mở rộng từng đỉnh. |
| **Topological Sort** | Sắp xếp đỉnh đồ thị có hướng không chu trình. |
| **Tarjan** | Tìm SCC (Strongly Connected Components) hoặc cầu. |
| **Kosaraju** | Tìm SCC trong đồ thị có hướng. |
| **A*** | Tìm đường đi ngắn nhất có heuristic (AI). |

---

## 🧮 D. Thuật Toán Quy Hoạch Động (Dynamic Programming)

| Tên Thuật Toán | Mô Tả Ngắn |
|----------------|-------------|
| **Fibonacci (DP)** | Tính dãy Fibonacci tối ưu bằng lưu kết quả trung gian. |
| **Knapsack Problem** | Bài toán balo (chọn vật có giá trị lớn nhất trong giới hạn). |
| **Longest Common Subsequence (LCS)** | Tìm dãy con chung dài nhất. |
| **Longest Increasing Subsequence (LIS)** | Dãy con tăng dài nhất. |
| **Matrix Chain Multiplication** | Tối ưu thứ tự nhân ma trận. |
| **Coin Change Problem** | Tìm số cách đổi tiền bằng các mệnh giá. |
| **Edit Distance** | Số phép biến đổi chuỗi A thành B. |
| **Subset Sum** | Có tập con nào có tổng bằng giá trị X không. |
| **DP trên đồ thị / cây** | Áp dụng DP cho cấu trúc dữ liệu có quan hệ cha–con. |

---

## 🔤 E. Thuật Toán Xử Lý Chuỗi (String Algorithms)

| Tên Thuật Toán | Mô Tả Ngắn |
|----------------|-------------|
| **KMP (Knuth-Morris-Pratt)** | Tìm chuỗi con nhanh bằng bảng “lùi”. |
| **Rabin-Karp** | Tìm chuỗi con bằng kỹ thuật hashing. |
| **Z-algorithm** | Tìm mẫu trong chuỗi bằng mảng Z. |
| **Manacher** | Tìm palindrome dài nhất trong chuỗi. |
| **Trie Tree** | Cấu trúc cây lưu trữ chuỗi theo ký tự. |
| **Aho-Corasick** | Tìm nhiều mẫu cùng lúc trong văn bản. |
| **Suffix Array / Suffix Tree** | Dùng để tìm kiếm, so sánh hậu tố, nén dữ liệu. |

---

## ⚙️ F. Thuật Toán Chia Để Trị (Divide and Conquer)

| Tên Thuật Toán | Mô Tả Ngắn |
|----------------|-------------|
| **Merge Sort** | Chia nhỏ rồi trộn mảng đã sắp. |
| **Quick Sort** | Chia mảng theo pivot rồi sắp riêng từng phần. |
| **Binary Search** | Chia đôi mảng để tìm nhanh. |
| **Closest Pair of Points** | Tìm hai điểm gần nhất trong mặt phẳng. |

---

## 💎 G. Thuật Toán Tham Lam (Greedy Algorithms)

| Tên Thuật Toán | Mô Tả Ngắn |
|----------------|-------------|
| **Kruskal, Prim** | Chọn cạnh nhỏ nhất để tạo cây khung. |
| **Huffman Encoding** | Mã hóa dữ liệu tối ưu (dùng trong nén file). |
| **Activity Selection** | Chọn hoạt động không trùng thời gian tối đa. |
| **Job Sequencing** | Xếp lịch công việc tối đa lợi nhuận. |
| **Fractional Knapsack** | Balo phân số (chia nhỏ vật để tối ưu giá trị). |

---

## 📐 H. Thuật Toán Toán Học & Hình Học (Math & Geometry)

| Tên Thuật Toán | Mô Tả Ngắn |
|----------------|-------------|
| **GCD / LCM (Euclid)** | Tìm ước chung lớn nhất / bội chung nhỏ nhất. |
| **Sieve of Eratosthenes** | Sàng số nguyên tố hiệu quả. |
| **Fast Exponentiation** | Lũy thừa nhanh trong O(logN). |
| **Convex Hull (Graham / Jarvis)** | Bao lồi của tập điểm. |
| **Line Intersection, Orientation** | Tính giao nhau, hướng của 2 vector/đoạn thẳng. |

---

## 🌳 I. Thuật Toán Cấu Trúc Cây (Tree-Based Algorithms)

| Tên Thuật Toán | Mô Tả Ngắn |
|----------------|-------------|
| **Binary Search Tree (BST)** | Cây tìm kiếm nhị phân. |
| **AVL Tree** | BST tự cân bằng độ cao. |
| **Red-Black Tree** | BST cân bằng màu đỏ–đen. |
| **Segment Tree** | Cấu trúc cho truy vấn khoảng. |
| **Fenwick Tree (BIT)** | Cấu trúc cộng dồn nhanh. |
| **Trie Tree** | Cây lưu chuỗi ký tự (dạng tiền tố). |
| **Union-Find (Disjoint Set Union)** | Tập hợp rời — quản lý kết nối giữa các phần tử. |

---

### 📚 Tổng kết

C++ là ngôn ngữ cực mạnh nhờ:
- **STL Algorithms**: thư viện có sẵn giúp code ngắn gọn và tối ưu.
- **Custom Algorithms**: dễ cài đặt thuật toán phức tạp với hiệu năng cao.

---

**Gợi ý:**  
👉 Có thể tạo file `thuat_toan_C++.md` và lưu nội dung này để tra cứu nhanh trong VSCode, Obsidian, hoặc GitHub.
