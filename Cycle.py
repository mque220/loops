x = input()
initial_num = x
if (int(x) < 10):
    x = "0" + x
    initial_num = x
index = 0
while (1):
    index = index + 1
    a = x[0:1]
    b = x[1:2]
    y = int(a) + int(b)
    x = b + str(y % 10)
    if (x == initial_num):
        print(index)
        break