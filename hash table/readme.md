
# C++ STL 中的 string, vector, set, queue, stack, 和 map 容器重点介绍

## string 类
尽管 `string` 不是严格意义上的 STL 容器，但它提供了许多与 STL 容器相似的功能，并且是处理文本字符串的标准方式。

### 生成：
```cpp
string str("123");
string str = "123";
```

### 操作：
- **访问头尾元素**：`str.front();`, `str.back();`
- **插入字符**：`str.push_back('a');`, `str.insert(pos, 'a');`
- **删除字符**：`str.pop_back();`, `str.erase(startPos, length);`
- **替换子串**：`str.replace(startPos, length, "newSubStr");`
- **拼接字符串**：`str1 += str2;`, `str1.append(str2);`
- **容量和大小**：`str.size();`, `str.length();`
- **排序**：`sort(str.begin(), str.end());`
- **查找子串或字符**：`str.find("subStr");`

---

## vector 容器
`vector` 是动态数组，允许随机访问元素，但在中间位置插入或删除元素时效率较低。

### 生成：
```cpp
vector<int> vct;
vector<int> vct(3, 5); // 创建包含 3 个值为 5 的元素的向量
```

### 操作：
- **访问头尾元素**：`vct.front();`, `vct.back();`
- **插入元素**：`vct.push_back(value);`, `vct.insert(position, value);`
- **删除元素**：`vct.pop_back();`, `vct.erase(position);`
- **获取容量**：`vct.size();`
- **判空**：`vct.empty();`
- **清空**：`vct.clear();`
- **遍历**：
  - 索引遍历
  - 迭代器遍历
  - 范围 `for` 循环

---

## set 容器
`set` 是有序集合，不允许重复元素，内部实现通常为红黑树，保证了对数时间复杂度的操作性能。

### 生成：
```cpp
set<int> st;
```

### 操作：
- **插入元素**：`st.insert(value);`
- **删除元素**：`st.erase(value);`
- **查找元素**：`st.find(value);`
- **获取元素数量**：`st.size();`
- **判空**：`st.empty();`
- **清空**：`st.clear();`
- **迭代器**：`st.begin();`, `st.end();`

---

## queue 容器
`queue` 是队列（先进先出 FIFO），默认基于 `deque` 实现。

### 生成：
```cpp
queue<int> q;
```

### 操作：
- **入队**：`q.push(value);`
- **出队**：`q.pop();`
- **访问队首元素**：`q.front();`
- **访问队尾元素**：`q.back();`
- **获取队列大小**：`q.size();`
- **判空**：`q.empty();`

---

## stack 容器
`stack` 是栈（后进先出 LIFO），默认基于 `deque` 实现。

### 生成：
```cpp
stack<int> sk;
```

### 操作：
- **入栈**：`sk.push(value);`
- **出栈**：`sk.pop();`
- **访问栈顶元素**：`sk.top();`
- **获取栈大小**：`sk.size();`
- **判空**：`sk.empty();`

---

## map 容器
`map` 是键值对映射，不允许重复键，内部实现为红黑树，提供快速查找、插入和删除操作。

### 生成：
```cpp
map<KeyType, ValueType> mp;
map<int, int> mp;
```

### 操作：
- **插入键值对**：
  ```cpp
  mp[key] = value;
  mp.insert(make_pair(key, value));
  ```
- **删除键值对**：`mp.erase(key);`
- **查找键值对**：`mp.find(key);`
- **获取映射大小**：`mp.size();`
- **判空**：`mp.empty();`
- **清空**：`mp.clear();`
- **迭代器**：
  ```cpp
  mp.begin();
  mp.end();
  ```
- **访问键值对**：
  ```cpp
  iter->first;  // 获取 key
  iter->second; // 获取 value
  ```

---

## 选择容器的建议
每个容器都有其特点和适用场景，在选择容器时应根据具体需求考虑性能和易用性等因素。例如：
- 当你需要频繁地在序列的两端添加或移除元素时，`deque` 可能比 `vector` 更合适；
- 而如果你需要一个能够快速查找元素的数据结构，那么 `set` 或者 `map` 可能是更好的选择。
```
