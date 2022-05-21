def searching(arr,value):
    length = len(arr);
    for i in range(0,length):
        if(arr[i]==value):
            return i
    return "Not Found"


arr1 = [1,2,5,3,1,56,77,12,113,3,3,4,5,6,7,8]
arr2 = ['Farbi', 'Shaoib', 'Sakura', 'Ritu', 'Mahin', 'Rajjak', 'Ayon']

print(searching(arr1,77))
print(searching(arr2,"Karim"))
