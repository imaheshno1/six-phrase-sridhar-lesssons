import random
random.seed()
outFile = open("10000.txt","w")
for iter in range(0,9999):
    num = ( random.randrange(10000,100000) ) % 100000
    outFile.write(str(num)+",")
num = ( random.randrange(10000,100000) ) % 100000
outFile.write(str(num))
outFile.close()
    
