# Leetcode 题解 - 数组
<!-- GFM-TOC -->
* [Leetcode 题解 - 数组](#leetcode-题解---数组)
    * [1. 二分查找](#704-字符串循环移位包含)
    *

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
