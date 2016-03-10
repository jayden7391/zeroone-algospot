list = raw_input()

c = input()

count = 0

while count < c:
    ran = raw_input()
    ranges = ran.split(" ")
    i = int(ranges[0])
    j = int(ranges[1])
    
    if i > j:
        t = i
        i = j
        j = t

    
    list_sub = list[i:j+1]
    max = 0
    min = 0
    if "1" in list_sub:
        max = 1
    else:
        max = 0
    if "0" in list_sub:
        min = 0
    else:
        min = 1

    if min == max:
        print("Yes")
    else:
        print("No")


