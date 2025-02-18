# Leetcode 题解 - 数组
<!-- GFM-TOC -->
* [Leetcode 题解 - 数组]()
    * [704. 二分查找](https://leetcode.cn/problems/binary-search/)
    * [27. 移除元素](https://leetcode.cn/problems/remove-element/)
    * [209. 长度最小的子数组](https://leetcode.cn/problems/minimum-size-subarray-sum/description/)

## 1. 二分查找
```html
输入: nums = [-1,0,3,5,9,12], target = 9
输出: 4
```
二分查找两种写法：左闭右开/左闭右闭
```c++
int left = 0; int right = nums.size(); while(left<right)
int left = 0; int right = nums.size()-1; while(left<=right)
```

## 2. 移除元素
```html
输入：nums = [3,2,2,3], val = 3
输出：2, nums = [2,2,_,_]
```
双指针法（快慢指针法）： 通过一个快指针和慢指针在一个for循环下完成两个for循环的工作。

定义快慢指针

快指针：寻找新数组的元素 ，新数组就是不含有目标元素的数组

慢指针：指向更新 新数组下标的位置


## 3. 长度最小的子数组
```html
输入：target = 7, nums = [2,3,1,2,4,3]
输出：2
解释：子数组 [4,3] 是该条件下的长度最小的子数组
```
滑动窗口
在本题中实现滑动窗口，主要确定如下三点：

窗口内是什么？

如何移动窗口的起始位置？

如何移动窗口的结束位置？

窗口就是 满足其和 ≥ s 的长度最小的 连续 子数组

```c++
while (sum >= s) {
    subLength = (j - i + 1); // 取子序列的长度
    result = result < subLength ? result : subLength;
    sum -= nums[i++]; // 这里体现出滑动窗口的精髓之处，不断变更i（子序列的起始位置）
}
```


