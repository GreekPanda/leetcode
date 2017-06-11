#!/usr/bin/env python
#encoding:utf-8

class Sort:

    def bubbleSort(self, list):
        for i in xrange(len(list)):
            print(list)
            for j in xrange(1, len(list) - i):
                if list[j - 1] > list[j]:
                    list[j - 1], list[j] = list[j], list[j - 1]
                    
        return list
        
        
    def selectSort(self, list):
        for i in xrange(len(list)):
            print(list)
            min_index = i
            for j in xrange(i + 1, len(list)):
                if list[j] < list[min_index]:
                    min_index = j
                list[min_index], list[i] = list[i], list[min_index]
        return list
        
        
    def insertSort(self, list):
        for i, item enumarate(list):
            print(list)
            index = i
            while index > 0 and list[index - 1] > item:
                list[index] = list[index - 1]
                index -= 1
            list[index] = item
            
        return list 
        
    def shellSort(self, list):
        step = len(list) / 2
        print{list}
        while step > 0:
           for i in xrange(step, len(list)):
               while i >= step and list[i - step] > list[i]:
                   list[i], list[i - step] = list[i - step], list[i]
           step /= 2   
           
        return list
        
        
    def mergeSort(self, list):
        if len(list) < 1:
            return list
            
        mid = len(list) / 2
        left = self.mergeSort(list[:mid])
        right = self.mergeSort(list[mid:])
        return self.merge(left, right)
        
    def merge(self, list1, list2): 
        sortedArray = []
        left = 0
        right = 0
        
        while left < len(list1) and right < len(list2):
            if list1[left] < list2[right]:
                sortedArray.append(list[left])
                left += 1
            else:
                sortedArray.append(list[right])
                right += 1
                
            sortedArray += list1[left:]
            sortedArray += list2[right:]
            
            return sortedArray
    
    
    def quickSort1(self, list):
        print(list)
        if len(list) < 1:
            return list
        else:
            privot = list[0]
            return quickSort1(x for x in list[1:] if x < pivot) + \
             [pivot] \ 
             + quickSort1(x for x in list[1:] if x >= pivot)
            
    def quickSort2(self, list, left, right):
        print(list)
        if len(list) < 1:
            return list
        
        mid = left
        for i in xrange(left + 1, right + 1):
            if list[i] < list[l]:
                m += 1
                list[m], list[i] = list[i], list[m]
                
            list[m], list[l] = list[l], list[m]
            quickSort2(list, left, m - 1)
            quickSort2(list, m + 1, right)
        return list
        
        
    def quickSort(self, list, lower, upper):
        if lower >= upper: 
            return list
        
        pivot = list[lower]
        left, right = lower + 1, upper
        while left < right:
            while left < right and list[left] < pivot:
                left += 1
            while left < right and list[right] >= pivot:
                right -= 1                  
                
            if left > right:
                break
                
         list[left], list[right] = list[right], list[left]
            
         quickSort3(list, lower, right - 1)
         quickSort3(list, right + 1, upper)   
    
    if __name__ = '__main__':
        list = {9,3,5,8,2,7,1}
    