### The Concept of Prefix Sum

The idea of the prefix sum is to **reuse the sums of previously computed subarrays, thereby reducing the number of additions needed for range queries**.

#### Basic Idea of Prefix Sum

Suppose we have an array `vec[i]` and need to calculate the sum of its subarray ranges.  
We can first construct a prefix sum array `p[i]`, where:

- `p[i]` represents the cumulative sum of elements from index `0` to `i` in `vec[i]`.

With this prefix sum array, the sum of a range `[l, r]` can be quickly calculated as:

- For `l > 0`:  
sum(l, r) = p[r]

  Using the prefix sum significantly reduces the computational complexity of range sum queries.
