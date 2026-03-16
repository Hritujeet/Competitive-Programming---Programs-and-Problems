import math

def solve(num):
    if num == 0:
        print(0)
    elif num == 1:
        print(1)
    else: 
        answer = 0
        exp = 0
        current_number = num

        while current_number > 0:
            answer += (current_number % 2) * math.pow(10, exp)
            exp += 1
            current_number = current_number // 2

        print(answer)

if __name__ == '__main__':
    num = int(input("Enter a number:\n"))
    solve(num)
