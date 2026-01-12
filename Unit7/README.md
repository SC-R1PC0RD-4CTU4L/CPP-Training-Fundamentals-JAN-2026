## Unit 7 - STL & Algorithms

### Very Short Questions

What is STL?

What is a container?

What is vector?

What is map?

What is set?

What is unordered_map?

What is a pair?

What is an iterator?

What does sort() do?

What is lower_bound()?

What is the time complexity of sort()?

What is the difference between map and unordered_map?

What is a lambda function?

What is a comparator?

What does push_back() do?

What is erase()?

What does find() return?

What is end() iterator?

What is count()?

What is stable sort?

### Short Questions

Explain STL architecture.

Explain vector and its operations.

Explain map and set.

Explain hashing in unordered_map.

Explain iterators with example.

Explain sort() with custom comparator.

Explain lambda functions.

Explain lower_bound() and upper_bound().

Explain why unordered_map is faster on average.

Explain why iterators can be invalidated.

Explain time complexity of STL containers.

Explain stable vs unstable sort.

Explain why set stores unique elements.

Explain why random access iterators matter.

Explain algorithm vs container.

### Code Tracing ( Predict The Output)

1.

```cpp
vector<int> v = {3,1,2};
sort(v.begin(), v.end());
for(int x : v) cout << x;

```

2.

```cpp
map<int,int> m;
m[2] = 10;
m[1] = 20;
for(auto p : m) cout << p.first;

```

3.

```cpp
set<int> s = {3,1,2,2};
for(int x : s) cout << x;
```

4.

```cpp
vector<int> v = {1,2,3,4};
auto it = lower_bound(v.begin(), v.end(), 3);
cout << *it;

```

5.

```cpp
unordered_map<int,int> m;
m[1]++;
m[1]++;
cout << m[1];
```

### Programming Questions

Sort an array using vector.

Count frequency of elements using map.

Find unique elements using set.

Implement phonebook using unordered_map.

Sort pairs by second element.

Find the first element ≥ x using lower_bound.

Count words in a sentence using map.

Find top-k frequent elements.

Merge two sorted vectors.

Group anagrams.

### Conceptual Questions

Why is unordered_map faster but unsafe sometimes?

Why is iterator invalidation dangerous?

Why is sort not stable?

Why do we prefer STL over manual implementation?

Why is complexity awareness important?
