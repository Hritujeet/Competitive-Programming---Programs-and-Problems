def reverse_array(array):
    x = 0
    y = len(array) - 1

    while x < y:
        temp = array[x]
        array[x] = array[y]
        array[y] = temp
        x += 1
        y -= 1

if __name__ == '__main__':
    array = [1, 2, 3, 4, 5]

    print('Original array:')
    for i in array:
        print(i)

    reverse_array(array)
    
    print('Reversed array:')
    for i in array:
        print(i)