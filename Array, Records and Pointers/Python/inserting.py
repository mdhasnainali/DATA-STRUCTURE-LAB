def insert_in_sorted_array(arr,value):
    length = len(arr)
    for i in range(0,length):
        if(arr[i]>value):
            arr.insert(i,value)
            break
    arr.insert(length,value) 
    print(arr)


arr1 = [1,2,3,4,5,6,7,8]
insert_in_sorted_array(arr1,54)
arr2 = ['Ayon', 'Farbi', 'Mahin', 'Razzak', 'Ritu', 'Sakura', 'Shaoib']
insert_in_sorted_array(arr2,'Rahim')

arr1.insert(5,99)
print(arr1)
arr2.insert(5,'Karim')
print(arr2)