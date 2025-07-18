
# 📚 Arrays in Data Structures using C

## ✅ What is an Array?

An array is a **collection of elements** stored at **contiguous memory locations**. All elements are of the **same data type**.

```c
int arr[5] = {10, 20, 30, 40, 50};
```


---

## 🔁 Why Loops are Used with Arrays?

- Arrays are **sequential**; each element is indexed.
- Loops (like `for`, `while`) allow easy **iteration** from `index 0` to `n-1`.
- Using loops makes it easy to **traverse, search, modify, and display** elements.

```c
for(int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
}
```

✅ Efficient, clean, and reduces repetitive code
❌ Manually accessing each index is error-prone and not scalable

---

## 🔍 Traversing an Array

**Traversing** means visiting every element exactly once, typically using a loop.

```c
#include <stdio.h>
int main() {
    int arr[4] = {1, 2, 3, 4};
    for(int i = 0; i < 4; i++) {
        printf("Element %d = %d\n", i, arr[i]);
    }
    return 0;
}
```

---

## 👍 Advantages of Arrays

- **Fast Access** using index (O(1) time)
- **Easy to traverse** and manipulate with loops
- **Memory-efficient** for fixed-size data
- Suitable for **static** data structures

---

## 👎 Disadvantages of Arrays

- **Fixed size** (not dynamic)
- **Insertion/Deletion** is expensive (requires shifting)
- Wastes memory if array not fully used
- Not suitable when size needs to change frequently

---

## 📌 Summary Table

| Feature          | Description                         |
| ---------------- | ----------------------------------- |
| Type             | Static, linear data structure       |
| Access Time      | O(1) – Direct access via index      |
| Loop Use         | Required for traversal & operations |
| Flexibility      | Low – Fixed size                    |
| Traversal Method | Looping from index 0 to n-1         |

