# Last updated: 11/4/2025, 7:50:49 AM
class Solution(object):
    def reverse(self, num):
        te = num
              
        if(num < 0):
            num = num * -1

        li = list(str(num))
        string = ''.join(li[::-1])
        if(int(string) < -2147483648 or int(string) >  2147483647):
            return 0
        
        if(te < 0):
            return int(string) * -1
        else:
            return int(string)


        