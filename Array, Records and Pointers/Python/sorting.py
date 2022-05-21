def bubble_sort(arr):
    length = len(arr)
    for i in range(0,length-1):
        for j in range(0,length-i-1):
            if(arr[j]>arr[j+1]):
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp


arr1 = [1,2,5,3,1,56,12,113,3,3,4,5,6,7,8]
bubble_sort(arr1)
print(arr1)
arr2 = ['Farbi', 'Shaoib', 'Sakura', 'Ritu', 'Mahin', 'Rajjak', 'Ayon']
bubble_sort(arr2)
print(arr2)

