def print_subarray(array):
    for i in range(0, len(array)):
        for j in range(i, len(array)):
            print(f"{array[i:j + 1]}")

if __name__ == '__main__':
    array = [1, 2, 3, 4, 5]
    print_subarray(array)