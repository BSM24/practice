array = [1,3,2,4]
def swap(array,i1,i2):
    temp = array[i1]
    array[i1] = array[i2]
    array[i2] = temp
for ele in array:
    for ele in array:
        index = array.index(ele)
        if index > 0:
            if ele < array[index-1]:
                swap(array,index,index-1)
                #print(ele,array.index(ele),array[array.index(ele)],array.index(array.index(ele) - 1))
                print(array)
        else:
            continue
print(array)
