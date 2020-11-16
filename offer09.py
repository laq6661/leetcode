class CQueue(object):

    def __init__(self):
        self.s1, self.s2 = [], []

    def appendTail(self, value: int) -> None:
        self.s1.append(value)


    def deleteHead(self) -> int:
        """
        :rtype: int
        """
        res = -1
        if self.s2:
            res = self.s2.pop()
        elif self.s1:
            while(self.s1):
                self.s2.append(self.s1.pop())
            res = self.s2.pop()
        else: return -1
        return res



# Your CQueue object will be instantiated and called as such:
# obj = CQueue()
# obj.appendTail(value)
# param_2 = obj.deleteHead()
