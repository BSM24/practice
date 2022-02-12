def letterfinder(str):
    letters = []
    for l in str:
        if l not in letters:
            letters.append(l)
    #print(letters)
    return letters

def substrfinder(str):
    letters = letterfinder(str)  
    length = len(letters)
    result = []
    for i in range(0,len(str) - length + 1):
        count = 0
        for j in range(0,length):
            if letters[j] in str[i:i+length]:
                count = count + 1
        #print(count)
        if count == length:
            result = [1,str[i:i+length]]
    return result

inarr = ["Assign","zzzzzzzxzsdxs","Madammxmsgs","1a12231a"]
substr = ""
outstr = []
for ele in inarr:
    res = substrfinder(ele)
    if len(res) != 0 and res[0] == 1:
        outstr.append(res[1])
lengths = []
for ele in outstr:
    lengths.append(len(ele))
minlen = min(lengths)
for ele in outstr:
    if len(ele) == minlen:
        print(ele)
        break

