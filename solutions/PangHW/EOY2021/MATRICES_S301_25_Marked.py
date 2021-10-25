#2021 SST S3 EOY TASK 3 : MATRICES
matrixA = [[1, 4, 3],
           [2, 5, 9]]
matrixB = [[1, 3, 3, 7],
           [2, 4, 6, 8],
           [2, 0, 2, 1]]

result = [] # L                                                         #Q10 1/10

if len(matrixA[0]) == len(matrixB): # L                                 #Q10 2/10
    print("Matrix A and Matrix B can be multiplied together.") # S      #Q10 3/10

    row = len(matrixA)
    col = len(matrixB[0]) # L                                           #Q10 4/10
    
    tempRow = [0] * col # S, L                                          #Q10 5/10, 6/10
    for _ in range(row):
        result.append(list(tempRow))

    for i in range(row):
        for j in range(col): # L                                        #Q10 7/10
            for k in range(len(matrixB)):
                result[i][j] += matrixA[i][k] * matrixB[k][j] # L       #Q10 8/10

    print(result)
    
else: # L                                                               #Q10 9/10
    print("Matrix A and Matrix B cannot be multiplied together.")


#Q10 9/10
