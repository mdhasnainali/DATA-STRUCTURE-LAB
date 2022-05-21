def storing_sparse_matrix(arr):
    new_arr = []
    row = len(arr)
    column = len(arr[0])
    for i in range(0,row):
        for j in range(0,column):
            if(arr[i][j]!=""):
                new_arr.append(arr[i][j])
    return new_arr

def finding(arr,row,column):
    index = (row * (row-1))//2 + column
    return arr[index]


A = [
    [1,'','',''],
    [1,1,'',''],
    [1,1,6,''],
    [1,1,1,1]
]

B = storing_sparse_matrix(A)

print(finding(B,3,2))
