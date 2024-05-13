import string
# Program purpose: Given an n by m matrix, tranpose it to m by n
print("Input your matrix in the following fashion'a,b,...' where a and b are the values within the row")
x = input().split(" ")


OldMatrix = []
while(x.__contains__("DONE") == False):
    OldMatrix.append(x) # puts the old list into here
    x = input().split(" ")

row = []
MatrixList = []
CurrentRow= []
def parseMatrix(Matrix):
    cols = len(Matrix[0])
    rows = len(Matrix)
   # NewMatrix = [len(Matrix)-1][len(Matrix[0])-1]
    for m in range(cols): 
        row = []
        for n in range(rows):
            row.append(Matrix[n][m])
        MatrixList.append(row)
    print(MatrixList)

parseMatrix(OldMatrix)