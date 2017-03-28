class ThreeSum:
    def threeSum(self, numbers):
        triplets = []
        len = len(numbers)
        if len < 3:
            return triplets
            
        numbers.sort();
        for i in xrange(len):
            target = 0 - numbers[i]
            hashmap = {}
            for j in xrange(i + 1, len):
                item_j = numbers[j]
                if (target - item_j) in hashmap:
                    triplet = [numbers[j], target - item_j, item_j]
                    if  triplet not in triplets:
                        triplets.append(triplet)
                else:
                    hashmap[item_j] = j
        
        
        return triplets   