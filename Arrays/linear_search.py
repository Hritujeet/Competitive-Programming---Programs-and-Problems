def linear_search(arr, target):
    for i in range(0, len(arr)):
        if arr[i] == target:
            return i
    return -1

if __name__ == '__main__':
    arr = [5, 3, 8, 4, 2]
    target = 2
    result = linear_search(arr, target)
    if result != -1:
        print(f"Element found at index: {result}")
    else:
        print("Element not found")