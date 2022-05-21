def add_tow_matrix(matrix1,matrix2):
    row = len(matrix1)
    column = len(matrix1[0])

    matrix = []

    for i in range(0,row):
        columns = []
        for j in range(0,column):
            columns.append(matrix1[i][j] + matrix2[i][j])
        matrix.append(columns)        

    print(matrix)


def subtract_tow_matrix(matrix1,matrix2):
    row = len(matrix1)
    column = len(matrix1[0])

    matrix = []

    for i in range(0,row):
        columns = []
        for j in range(0,column):
            columns.append(matrix1[i][j] - matrix2[i][j])
        matrix.append(columns)        

    print(matrix)


def multiply_tow_matrix(matrix1,matrix2):
    row = len(matrix1)
    column = len(matrix1[0])

    matrix = []

    for i in range(0,row):
        columns = []
        for j in range(0,column):
            sum = 0;
            for k in range(0,row):
                sum = sum + matrix1[i][j] * matrix2[k][j]
            columns.append(sum)
        matrix.append(columns)        

    print(matrix)


matrix1 = [
    [1,2,3,4],
    [5,6,7,8],
    [9,10,11,12],
    [13,14,15,16]
]
matrix2 = [
    [16,15,14,13],
    [12,11,10,9],
    [8,7,6,5],
    [4,3,2,1]
]

add_tow_matrix(matrix1,matrix2)
subtract_tow_matrix(matrix1,matrix2)
multiply_tow_matrix(matrix1,matrix2)