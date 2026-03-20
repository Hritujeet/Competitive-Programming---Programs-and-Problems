def kadane_algorithm(array):
    currSum = 0
    maxSum = float('-inf')

    for item in array:
        currSum += item
        maxSum = max(maxSum, currSum)
        if currSum < 0:
            currSum = 0
    return maxSum

if __name__ == '__main__':
    array = [3, -4, 5, 4, -1, 7, -8]
    max_sum = kadane_algorithm(array)
    print(f"Maximum subarray sum is: {max_sum}")