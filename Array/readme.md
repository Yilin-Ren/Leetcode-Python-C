# Leetcode 题解 - 数组
<!-- GFM-TOC -->
* [Leetcode 题解 - 数组]()
    * [704. 二分查找](https://leetcode.cn/problems/binary-search/)
    * [27. 移出元素](https://leetcode.cn/problems/remove-element/)

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
```html
定义快慢指针
快指针：寻找新数组的元素 ，新数组就是不含有目标元素的数组
慢指针：指向更新 新数组下标的位置
```



