specialstringlist = []
outstr = []
#stringlist = "tarks,arkst,kstar,trs,tsk"
stringlist = input()
strings = stringlist.split(",")
string1 = input()
#string1 = "stark"
def generatesplstr(str):
    newstr = str[1:len(str)] + str[0]
    specialstringlist.append(newstr)
    if string1 not in specialstringlist:
        generatesplstr(newstr)
    return newstr
generatesplstr(string1)

def issorted(lis):
    count = 1
    for i in range(0,len(lis)-1):
        if lis[i] < lis[i+1]:
            count = count + 1
    if count == len(lis):
        return 1

def ispartof(str1,str2):
    indexarr = []
    for letter in str2:
        if letter in str1:
            indexarr.append(str1.index(letter))
    return issorted(indexarr)

def issequence(str,li):
    for ele in li:
        if str == ele:
            outstr.append(str)
            break
        elif ispartof(ele,str):
            outstr.append(str)
            break
for ele in strings:
    issequence(ele,specialstringlist)
if len(outstr) == 0:
    print("-1")
else:
    print(outstr)