n1 = 7863947863734689732469874
n2 = 23874628976349873568732465298374634897563489
print("length of n1 = ",len(str(n1)))
print("length of n2 = ",len(str(n2)))

temp = n1 % n2
ctr = 0
while temp!=0:
    print (n1, n2, temp, end = ' ')
    n1 = n2
    n2 = temp
    temp = n1 % n2
    print()
    ctr+=1


print(ctr)
