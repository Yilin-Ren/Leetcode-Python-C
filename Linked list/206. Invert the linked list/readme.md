## Reverse a Singly Linked List Using Two Pointers

### Overview of the Approach
The two-pointer method reverses a linked list using two pointers, `prev` and `curr`:
1. Initialize `prev = None` and `curr = head`.
2. Traverse the linked list, reversing the direction of the current node’s pointer at each step.
3. Finally, return `prev`, which points to the new head of the reversed list.

### Two-Pointer Diagram
```
Initial State:
prev -> None
curr -> 1 -> 2 -> 3 -> 4 -> 5 -> None

Reversal Process:
1. 1 -> None          (prev -> 1)
   curr -> 2 -> 3 -> 4 -> 5 -> None

2. 2 -> 1 -> None     (prev -> 2)
   curr -> 3 -> 4 -> 5 -> None

3. 3 -> 2 -> 1 -> None (prev -> 3)
   curr -> 4 -> 5 -> None

4. 4 -> 3 -> 2 -> 1 -> None (prev -> 4)
   curr -> 5 -> None

5. 5 -> 4 -> 3 -> 2 -> 1 -> None (prev -> 5)
   curr -> None

Final State:
prev -> 5 -> 4 -> 3 -> 2 -> 1 -> None
```

### Time and Space Complexity
- **Time Complexity**: O(n), as the list is traversed once.
- **Space Complexity**: O(1), since only two additional pointers are used.

--- 
