class Solution:
    # @param x : integer
    # @param n : integer
    # @param d : integer
    # @return an integer
    def pow(self, x, n, d):
            if(x==0):
                    return 0
            if(n==1):
                    return x%d
            if(n==0):
                    return 1
            if(n%2!=0):
                    return ((pow(x,n-1,d)%d)*(x%d))%d
            else:
                    return ((pow(x,n/2,d)%d)*(pow(x,n/2,d)%d))%d