#2021 SST S3 EOY TASK 3 : MATRICES
matrixA = [[1, 4, 3],
           [2, 5, 9]]
matrixB = [[1, 3, 3, 7],
           [2, 4, 6, 8],
           [2, 0, 2, 1]]

result = [] # L

if len(matrixA[0]) == len(matrixB): # L
    print("Matrix A and Matrix B can be multiplied together.") # S

    row = len(matrixA)
    col = len(matrixB[0]) # L
    
    tempRow = [0] * col # S, L
    for _ in range(row):
        result.append(list(tempRow))

    for i in range(row):
        for j in range(col): # L
            for k in range(len(matrixB)):
                result[i][j] += matrixA[i][k] * matrixB[k][j] # L

    print(result)
    
else: # L
    print("Matrix A and Matrix B cannot be multiplied together.")
