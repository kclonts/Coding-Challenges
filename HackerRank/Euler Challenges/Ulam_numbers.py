def ulam(a, b, ret_val):
    arr_1 = []
    arr_1.append(a)
    arr_1.append(b)

    start = 0
    while True:
        for x in range(len(arr_1)):
            print("index {} -> {}".format(x, arr_1[x]))
        try:
            return arr_1[ret_val]
        except IndexError:
            end = arr_1[len(arr_1) - 1]
            temp = []

            #set my pivot for addition
            j = 0
            for x in range(start, len(arr_1)):
                #calculate pivot + all the rest
                for y in range(j, len(arr_1)):
                    #skip loop if adding itself
                    if arr_1[x] is arr_1[y]:
                        continue
                    #**************************
                    temp.append(arr_1[x] + arr_1[y])
                j += 1
            #end for addition
            #start deleting duplicates
            for x in range(len(temp)):
                if temp.count(temp[x]) > 1 and temp[x] is not -1:
                    try:
                        val = temp[x]
                        print(val)
                        while True:
                            i = temp.index(val)
                            temp[i] = -1
                    except ValueError:
                        i = -1
                else:
                    #print(temp[x])
                    arr_1.append(temp[x])
            #end for loop deleting duplicates
            temp.clear()
            start = end
    #end of while loop and Exception

n, k = input().split(' ')
n = int(n)
k = int(k)
print(ulam(n, 2*n+1, k))
