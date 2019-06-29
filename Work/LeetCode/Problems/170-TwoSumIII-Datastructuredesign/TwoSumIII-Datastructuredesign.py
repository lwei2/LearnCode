from collections import defaultdict

class twoSum:
    def __init__(self):
        self.numbers = defaultdict(int)
    def add(self, number)
        self.numbers[number] += 1
    def find(self, target)
        for one in self.numbers.keys():
            other = target - one
            if other == one and self.numbers[one] < 2:
                continue
            if other not in self.numbers:
                continue
            return True
        return False

