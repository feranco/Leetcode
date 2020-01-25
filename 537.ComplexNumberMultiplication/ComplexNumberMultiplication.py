class Solution:
    def complexNumberMultiply(self, a: str, b: str) -> str:
        
        # split input strings
        n1 = a[:-1].split('+')
        n2= b[:-1].split('+')
        
        # convert to list of int (taking out last empty string)
        int1 = [int(i) for i in n1]
        int2 = [int(i) for i in n2]
        
        #compute result
        real = int1[0]*int2[0]-int1[1]*int2[1]
        img = int1[0]*int2[1]+int1[1]*int2[0]
        
        return str(real) + "+" + str(img) + "i"
